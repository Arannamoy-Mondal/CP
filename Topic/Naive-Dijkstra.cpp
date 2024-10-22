/*https://codeforces.com/problemset/problem/20/C*/
#include<bits/stdc++.h>
#define int long long
#define pb push_back
const int N=1e5+5;;
using namespace std;
class cmp{
    public:
    bool operator()(pair<int,int>x,pair<int,int>y){
        return x.second>y.second;
    }
};
vector<pair<int,int>> adj[N];
int dis[N],parent[N];
void dijkstra(pair<int,int>src){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp>q;
    q.push(src);
    dis[q.top().first]=0;
    while(!q.empty()){
        pair<int,int>par=q.top();
        q.pop();
        int child=par.first,cost=par.second;
        for(auto it:adj[child]){
            int newchild=it.first,newcost=it.second;
            if(cost+newcost <dis[newchild]){
                dis[newchild]=cost+newcost;
                q.push({newchild,dis[newchild]});
                parent[newchild]=child;
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
    int e1=e;
    while(e1--){
        int u,v,c;
        cin>>u>>v>>c;
        adj[u].pb({v,c});
        adj[v].pb({u,c});
    }
    for(int i=1;i<=n;i++){
        dis[i]=1e18;
        parent[i]=-1;
    }
    dijkstra({1,0});
    //for(int i=1;i<=n;i++)cout<<dis[i]<<" ";
    if(dis[n]==1e18){
        cout<<-1<<"\n";
        return 0;
    }
    else{
        int x=n;
        vector<int>ans;
        while(x!=-1){
            ans.pb(x);
            x=parent[x];
        }
        reverse(ans.begin(),ans.end());
        for(auto it:ans)cout<<it<<" ";
    }
}
