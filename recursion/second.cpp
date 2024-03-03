#include<bits/stdc++.h>
using namespace std;


void findpow(int n,int b)
{

    if(n==0)
        return ;
     findpow(n-1,b);
    cout<<n<<endl;
}

int main()
{
    int n,b;
    cout<<"Enter Base: ";
    cin>>b;
    cout<<"Enter Power: ";
    cin>>n;
    findpow(n,b);
}
