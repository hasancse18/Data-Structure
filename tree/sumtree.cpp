class Solution
{
    public:

    pair<bool,int>checksum(Node* root)
    {
        //base case
        if(root==NULL)
            {
                pair<bool,int>p=make_pair(true,0);
                return p;
            }
            //for leaf node
        if(root->left==NULL && root->right==NULL)
        {
            pair<bool,int>p=make_pair(true,root->data);
            return p;
        }



        pair<bool,int>left=checksum(root->left);
        pair<bool,int>right=checksum(root->right);

        bool x=root->data==left.second+right.second;


        bool l=left.first;
        bool r=right.first;
        pair<bool,int>ans;
        if(l && r && x)
        {
            ans.first=true;
            ans.second=2*root->data;
        }
        else
        {
            ans.first=false;
            return ans;
        }
        return ans;
    }



    bool isSumTree(Node* root)
    {
         // Your code here
         return checksum(root).first;
    }
