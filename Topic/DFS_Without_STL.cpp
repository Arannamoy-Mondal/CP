// Time Complexity n*n

#include <bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N = 1e4;
int v[N][N], n, e, par[N], level[N];
bool visited[N];
void init_array()
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            v[i][j] = 0;
        }
        visited[i] = false;
        par[i] = -1;
        level[i] = 0;
    }
}

void dfs(int src)
{
    cout << src << nl;
    visited[src] = true;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && v[src][i]==1)
        {
            dfs(i);
        }
    }
}
int32_t main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    
    cin >> n >> e;
    init_array();
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a][b] = 1;
        v[b][a] = 1;
    }
    dfs(0);
}

/*
for adjacency list vector<int> v[N]

void dfs(int src){
  vis[src]=1;
  for(int it:v[src]){
   if(!vis[it]){
   dfs(it);
   }
  }
}

*/
