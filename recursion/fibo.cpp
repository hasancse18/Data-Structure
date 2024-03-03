#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    int x= fibo(n-1)+fibo(n-2);
    cout<<x<<endl;
    return x;


}

int main()
{
    int n;
    cin>>n;
    int s=0,f=1;
    int temp;
    cout<<s<<endl;
    cout<<f<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<s+f<<endl;
        temp=f;
        f=s+f;
        s=temp;
    }
    //int x=fibo(n);
}
