#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e3;
int adj[N][N],dis[N],n,e,inf=1e18;
void dijkstra(int src){
    queue<int>q;
    dis[src]=0;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v=0;v<N;v++){
            if(adj[u][v]!=inf){
                int new_cost=adj[u][v]+dis[u];
                if(new_cost< dis[v]){
                    dis[v]=new_cost;
                    q.push(v);
                }
            }
        }
    }
}
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n,e;
    cin>>n>>e;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            adj[i][j]=inf;
        }
        adj[i][i]=0;
        dis[i]=inf;
    }
    for(int i=0;i<e;i++){
        int a,b,c;
        cin>>a>>b>>c;
        adj[a][b]=c;
        adj[b][a]=c;
    }

    dijkstra(0);
    for(int i=0;i<n;i++)cout<<i<<blk<<dis[i]<<nl;
} 


/*

Input:

7 6
0 1 3
2 3 4
1 3 5
3 4 6 
4 5 7
5 6 8


Output:
0 0
1 3
2 12
3 8
4 14
5 21
6 29
*/
