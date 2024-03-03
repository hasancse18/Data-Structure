#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    while(t--){
        string s="vika";

        int n,m;
        cin>>n;
        cin>>m;

        char v[n][m];
        for (int i=0;i<n;i++){
            for(int j=0; j<m; j++){
                cin >> v[i][j];
                }
                    }

     int k=0;

    for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(s[k]==v[j][i]){
                    k++;
                    break;
                }


            }

        }

        if(k>=4 ){
            cout<< "YES"<<endl;
        }else{
            cout<< "NO"<<endl;
        }

    }
}
