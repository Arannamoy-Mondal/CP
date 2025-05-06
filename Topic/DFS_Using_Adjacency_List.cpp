/*https://codeforces.com/problemset/problem/445/B*/
#include<bits/stdc++.h>
#define int long long
#define pb push_back
const int N=1e7+5; ;
using namespace std;
vector<int> v[N];
int vis[N];
void dfs(int src){
    vis[src]=1;
    for(auto it:v[src]){
        if(!vis[it]){
            dfs(it);
        }
    }
}
int32_t main(){
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    int cnt=0,ans=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            dfs(i);
            cnt++;
        }
        ans=max(cnt,ans);
    }
    cout<<(1LL<<(n-ans));

}
