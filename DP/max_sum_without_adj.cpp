#include<bits/stdc++.h>
using namespace std;
 vector<int>v(4);
int solve(int n)
{
    if(n<0)
        return 0;
    if(n==0)
        return v[0];
    
    int inc=solve(n-2)+v[n];
    cout<<"INC "<<inc<<endl;
    int exc =solve(n-1)+0;
    
    cout<<"EXC "<<exc<<endl;
    return max(inc,exc);
}
int main()
{
   
    v[0]=9;
    v[1]=9;
    v[2]=8;
    v[3]=2;

    int ans = solve(3);
    cout<<ans<<endl;
}