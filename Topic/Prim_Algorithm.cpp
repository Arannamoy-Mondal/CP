#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e7,inf=1e18;
vector<pair<int,int>> v[N];
int visited[N],totalCost=0,par[N];

void prims(int src){
    set<pair<int,int>>st;
    st.insert({0,src});
    while(!st.empty()){
        auto t=*st.begin();
        cout<<t.second<<blk<<t.first<<nl;
        st.erase(*st.begin());
        if(visited[t.second])continue;
        visited[t.second]=1;
        totalCost+=t.first;
        for(auto it:v[t.second]){
            if(!visited[it.second]){
                st.insert({it.second,it.first});
                par[it.second]=t.second;
            }
        }
    }
    cout<<totalCost<<nl;
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    
    int n,e;
    cin>>n>>e;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(int i=0;i<n;i++){
        visited[i]=0;
        par[i]=-1;
    }
    prims(0);
    int x=n;
    vector<int>path;
    while(par[x]!=-1){
        path.push_back(par[x]);
        x=par[x];
    }
    path.push_back(0);
    reverse(path.begin(),path.end());
    cout<<nl;
    for(auto it:path)cout<<it<<blk;
}