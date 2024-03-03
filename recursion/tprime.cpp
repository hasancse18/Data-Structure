#include<bits/stdc++.h>
#define PI    acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl    '\n'
typedef long long int ll;
typedef unsigned long long int llu;
using namespace std;

int main()
{
    int n,c=0;
    vector<int>v;
    cin>>n;
    for(int i=0;i<n;i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
   for(int i=0;i<n;i++)
   {

        for(int j=2;j<=v[i]/2;j++)
   {
       if(v[i]%j==0)
       {
           c++;

       }

   }

        if(c==1)
        {
            cout<<"YES"<<endl;
            c=0;
        }
        else
           {
              cout<<"NO"<<endl;
              c=0;
           }
   }

}
