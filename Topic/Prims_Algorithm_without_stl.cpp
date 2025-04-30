#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;

const int N = 1e4, inf = 1e18;
int v[N][N]; 
int visited[N], totalCost = 0, par[N];
int n, e;
void prims(int src, int n){

    set<pair<int,int>> st; // {cost, node}
    vector<int> key(n, inf);
    key[src] = 0;
    st.insert({0, src});
    par[src] = -1;

    while(!st.empty()){
        auto [cost, u] = *st.begin();
        st.erase(st.begin());

        if(visited[u]) continue;
        visited[u] = 1;
        totalCost += cost;

        for(int i=0;i<n;i++){
            if(!visited[i] && v[u][i]<key[i]){
                st.insert({v[u][i],i});
                key[i] = v[u][i];
                par[i] = u;
            }
        }
    }

    cout << "Edges in MST:" << nl;
    for(int i = 0; i < n; i++){
        if(par[i] != -1){
            cout << par[i] << " -- " << i << nl;
        }
    }
    cout << "Total cost of MST: " << totalCost << nl;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    #endif
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            v[i][j]=inf;
        }
    }
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v[a][b]=c;
        v[b][a]=c;
    }

    for(int i = 0; i < n; i++){
        visited[i] = 0;
        par[i] = -1;
    }

    prims(0, n);
}

/*
0 1 6
0 2 4
0 4 3
1 3 4
1 2 3
2 3 5
2 4 2
4 6 5
4 5 6
3 5 3
3 9 5
3 8 2
5 6 4
6 7 3
5 8 2
8 9 2
7 8 5
9 7 4
*/

