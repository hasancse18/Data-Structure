#include<bits/stdc++.h>
using namespace std;
vector<int>v;
class node{
public:
    int data;
    int key;
    node* next;

    node()
    {
        data=0;
        key=0;
        next=NULL;
    }
    node(int k, int d)
    {
        data=d;
        key=k;
    }
};



class singlelist{
public:
    node* head;

    singlelist()
    {
        head=NULL;
    }
    singlelist(node* n)
    {
        head =n;
    }

    void appendlist(node *n)
    {

            if(head==NULL)
            {
                head=n;
                cout<<"Head Node Appended"<<endl;
            }
            else
            {
                node* ptr;
                ptr=head;
                while(ptr->next!=NULL)
                {
                    ptr=ptr->next;
                }
                ptr->next=n;
                cout<<"Another Node Appended"<<endl;
            }

    }

    void printlist()
    {
        node* ptr=head;

        while(ptr!=NULL)
        {
            v.push_back(ptr->data);
            //cout<<ptr->data<<endl;
            ptr=ptr->next;
        }
    }

};


int main()
{
    singlelist s;
    int i,d;

    for(i=0;i<5;i++)
    {
        cin>>d;
        node* n1=new node();

        n1->key=i;
        n1->data=d;
        s.appendlist(n1);
    }
    s.printlist();
     for(i=0;i<5;i++)
     {
         cout<<v[i]<<endl;
     }
}
