#include<bits/stdc++.h>
using namespace std;


bool calculate(int i,vector<int>&v,int n,vector<int>&a,int s,int t)
{
   if(i==n)
   {
     if(s==t)
     {
       // cout<<a.size();
        for(auto it:a)
            cout<<it<<" ";
        cout<<endl;
        return true;
     }
     return false;
   }


   a.push_back(v[i]);
   s+=v[i];
   if(calculate(i+1,v,n,a,s,t)==true) return true;

   a.pop_back();
   s=s-v[i];
   if(calculate(i+1,v,n,a,s,t)==true) return true;

   return false;
}

int main()
{
    vector<int>v{0,4,3,0},a;
    calculate(0,v,4,a,0,0);
}