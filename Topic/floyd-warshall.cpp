//cycle detection
#include<bits/stdc++.h>
#define int long long
using namespace std;;
class Edge{
    public:
    int u,v,c;
};
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n,e;
    cin>>n>>e;
    int adj[n][n];
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a][b]=c;
    }
    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(adj[i][k] +adj[k][j] <adj[i][j])adj[i][j]=adj[i][k]+adj[k][j];
            }
        }
    }
    for(int i=0;i<n;i++)if(adj[i][i]<0){
        cout<<"Cycle Detected"<<" ";
        break;
    }
}