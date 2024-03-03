#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int low,int mid,int high)
{
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high)
    {
        if(v[left]<=v[right])
        {
            temp.push_back(v[left]);
            left++;
        }
        else
        {
            temp.push_back(v[right]);
            right++;
        }
    }
    while(left<=mid)
    {
        temp.push_back(v[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(v[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        v[i]=temp[i-low];
    }
}
void mergesort(int low,int high,vector<int>&v)
{
    if(low==high)
        return;
    int mid=(low+high)/2;
    mergesort(low,mid,v);
    mergesort(mid+1,high,v);
    merge(v,low,mid,high);
}
int main()
{
    vector<int>v{2,1,5,4,3,6,9,7};
    int n=v.size();
    mergesort(0,n-1,v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}