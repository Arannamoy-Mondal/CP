#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
const int N=1e7;
using namespace std;
vector<int> v[N];
int dis[N];
int parent[N];
bool vis[N];
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    parent[src]=-1;
    dis[src]=0;
    while(!q.empty()){
        int par=q.front();
        q.pop();
        for(auto it:v[par]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
                dis[it]=dis[par]+1;
                parent[it]=par;
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
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=0;i<=n;i++){
        dis[i]=-1;
        vis[i]=0;
        parent[i]=-1;
    }
    int src;
    cin>>src;
    bfs(src);
    int cnt=0;
    for(int i=0;i<=n;i++){
        if(vis[i])cnt++;
    }
    vector<int>path;
    int x=89;
    while (parent[x]!=-1)
    {
        path.push_back(parent[x]);
        x=parent[x];
    }
    cout<<cnt<<nl;
    reverse(path.begin(),path.end());
    for(auto it:path)cout<<it<<blk;
}


/*
Input:
5 6
89 19
0 1
0 2
0 3
2 3
4 5
1 4
10 11
1 10
12 13
14 15
15 16
75 89
89 27
27 13
12 16
14 5
18 20
20 2
2 89
0


Output:
89
0 2
*/