#include<bits/stdc++.h>
using namespace std;
vector<int>v(3);
void solution(int n,vector<int> &v1)
{
    //cout<<"For value"<<n<<endl;
    if(n>=3)
    {
        for(int i=0;i<v1.size();i++)
        {
            cout<<v1[i]<<" ";
        }
        cout<<endl;
        return ;
    }
    v1.push_back(v[n]);
    solution(n+1,v1);
    v1.pop_back();
    //cout<<"Exit"<<endl;
    solution(n+1,v1);
    


}
int main()
{
    v[0]=3;
    v[1]=1;
    v[2]=2;
    vector<int>v1;
    solution(0,v1);
}