// BFS using Adjacency List
#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e4;
int v[N][N],par[N],level[N],n,e;
bool vis[N];
void BFS(int src){
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int par=q.front();
        q.pop();
        cout<<par<<nl;
        for(int i=0;i<n;i++){
            if(!vis[i] && v[par][i]==1){
                vis[par]=1;
                q.push(i);
            }
        }
    }
}
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    cin>>n>>e;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            v[i][j]=0;
        }
        vis[i]=false;
        par[i]=-1;
        level[i]=0;
    }

    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a][b]=1;
        v[b][a]=1;
    }
    BFS(0);
}

