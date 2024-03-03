#include<bits/stdc++.h>
using namespace std;
class node{
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

node* build_tree(node* root)
{
    int data;
    cout<<"Enter Data "<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1)
    {
        return NULL;
    }

    cout<<"Enter data for left node "<<data<<endl;
    root->left=build_tree(root->left);
    cout<<"Enter data for right node "<<data<<endl;
    root->right=build_tree(root->right);
    return root;
}

void build_level_order_tree(node* &root)
{
    queue<node*>q;
    int data;
    cout<<"Enter data for root node "<<endl;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty())
    {
        node* temp=q.front();
        q.pop();
        cout<<"Enter data for left node "<<temp->data<<endl;
        int leftd;
        cin>>leftd;
        if(leftd!=-1)
        {
            temp->left=new node(leftd);
            q.push(temp->left);
        }
        cout<<"Enter data for Right node "<<temp->data<<endl;
        int rightd;
        cin>>rightd;
        if(rightd!=-1)
        {
            temp->right=new node(rightd);
            q.push(temp->right);
        }

    }
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
            cout<<temp->data<<" ";
            if(temp->left!=NULL)
            {
                q.push(temp->left);
            }
            if(temp->right!=NULL)
            {
                q.push(temp->right);
            }
        }
    }
}


void inorder_traversal(node* root)
{
    if(root==NULL)
        return ;
    inorder_traversal(root->left);
    cout<<root->data<<" ";
    inorder_traversal(root->right);
}
void preorder_traversal(node* root)
{
    if(root==NULL)
        return ;
    
    cout<<root->data<<" ";
    preorder_traversal(root->left);
    preorder_traversal(root->right);
}
void postorder_traversal(node* root)
{
    if(root==NULL)
        return ;
    postorder_traversal(root->left);
    postorder_traversal(root->right);
    cout<<root->data<<" ";
}

int main()
{
    node* root =NULL;
    //root= build_tree(root);
    build_level_order_tree(root);
    cout<<"Level Order Traversal "<<endl;
    level_order_traversal(root);
    // cout<<endl;
    // cout<<"Inorder Traversal"<<endl;
    // inorder_traversal(root);
    // cout<<endl;
    // cout<<"Preorder Traversal"<<endl;
    // preorder_traversal(root);
    // cout<<endl;
    // cout<<"Postorder Traversal"<<endl;
    // postorder_traversal(root);
    // cout<<endl;

}