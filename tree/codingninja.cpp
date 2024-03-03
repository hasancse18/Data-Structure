#include<bits/stdc++.h>
using namespace std;

int givesum(int x)
{
    //cout<<x<<endl;
    //vector<int>v;
    int n=0;
    while(x)
    {
        //v.push_back(x%10);
        n=n+(x%10);
        x=x/10;
    }
    return n;
}


int main()
{
    int n;
    cin>>n;
    int i=0;
    int m=n/2;

    for(int i=n;i>=n/2;i--)
    {
        //cout<<"dhukci re";
       int x= givesum(i);
     //cout<<x+i<<endl;
     if(x+i==n)
     {
        cout<<"Paici re"<<endl;
        cout<<i<<endl;
     }
    }
}