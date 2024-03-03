#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;
    
    node(int d)
    {
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildtree(node* root)
{
    int data;
    cout<<"Enter data"<<endl;
    cin>>data;
    root =new node(data);
    if(data==-1)
    {
        return NULL;
    }
    
    cout<<"Enter data for left node "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data for right node "<<data<<endl;
    root->right=buildtree(root->right);

    return root;
}

void level_order_traversal(node* root)
{
    queue<node*>q;

    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        if(temp==NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
       else
       {
            cout<< temp->data<<" ";
            
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
       }
    }
}




int main()
{
    node* root=NULL;
    root=buildtree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Level order traversal "<<endl;
    level_order_traversal(root);
}