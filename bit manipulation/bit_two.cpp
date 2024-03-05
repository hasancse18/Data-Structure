#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cout<<"just check"<<endl;
    cin>>n;
    n=n<<1;

    for(i=0;i<n;i++)
    {
        int x=i;
        x=x>>1;
        x=x^i;
        cout<<x<<endl;
    }
}
