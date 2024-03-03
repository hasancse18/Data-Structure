#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s,c=0;
        cin>>s;
        vector<int>v(s);
        for(int i=0;i<s;i++)
        {
            int x;
            cin>>x;
            v[i]=x;
            c+=x;
        }
        if(s==2)
        {
            if(v[0]%2==0 && v[1]%2==0)
                cout<<"YES"<<endl;
            else if(v[0]%2!=0 && v[1]%2!=0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(c%2==0)
               cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }

    }
}
