#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;

const int N = 1e5, inf = 1e18;
vector<pair<int,int>> v[N]; 
int visited[N], totalCost = 0, par[N];

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

        for(auto [neighbor, wt] : v[u]){
            if(!visited[neighbor] && wt < key[neighbor]){
                st.insert({wt, neighbor});
                key[neighbor] = wt;
                par[neighbor] = u;
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

    int n, e;
    cin >> n >> e;
    for(int i = 0; i < e; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    for(int i = 0; i < n; i++){
        visited[i] = 0;
        par[i] = -1;
    }

    prims(0, n);
}

/*

*/

