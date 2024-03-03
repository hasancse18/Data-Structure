#include<bits/stdc++.h>
using namespace std;


struct Node{
    Node* link[26];
    bool flag=false;

    bool contains_char(char s)
    {
        return (link[s-'a']==NULL);
    }

    void put_char(char s,Node* node)
    {
        link[s-'a']=node;
    }
    Node* get_char(char s)
    {
        return link[s-'a'];
    }
    void setend()
    {
        flag=true;
    }
    bool get_flag()
    {
        return flag;
    }
};


class Trie
{
    private:
        Node* root;
    public:
        Trie()
        {
            root=new Node();
        }

        void insert(string word)
        {
           Node* node=root;
           for(auto it:word)
           {
            if(node->contains_char(it))
            {
                node->put_char(it,new Node());
            }
            node=node->get_char(it);
           }
           node->setend();

        }

        bool search(string word)
        {
            Node* node=root;
            for(auto it:word)
            {
                if(node->contains_char(it))
                {
                    //cout<<"Here"<<endl;
                    return false;
                }
                node=node->get_char(it);
            }
            return node->get_flag();
        }

        bool startsWith(string prefix)
        {
            Node* node =root;
            for(auto it:prefix)
            {
                if(node->contains_char(it))
                {
                    return false;
                }
                node=node->get_char(it);
            }
            return true;
        }


};

int main()
{
	int n = 5;
	vector<int>type = {1, 1, 2, 3, 2};
	vector<string>value = {"hello", "help", "help", "hel", "hel"};
	Trie trie;
	for (int i = 0; i < n; i++) {
		if (type[i] == 1) {
			trie.insert(value[i]);
		}
		else if (type[i] == 2) {
			if (trie.search(value[i])) {
				cout << "true" << "\n";
			}
			else {
				cout << "false" << "\n";
			}
		}
		else {
			if (trie.startsWith(value[i])) {
				cout << "true" << "\n";
			}
			else {
				cout << "false" << "\n";
			}
		}
	}
}