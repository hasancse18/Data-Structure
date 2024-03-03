#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter Number ";
    int d;
    cin>>d;
    cout<<"Enter Kth bit ";
    int k;
    int x;
    cin>>k;
    x=k;
    k=1<<k;
    bool s=d&k;
    cout<<s<<endl;
    cout<<"Another way   "<<endl;

    d=d>>x;
    s=d&1;
    cout<<s<<endl;
}
