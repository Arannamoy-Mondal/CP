/*https://codeforces.com/problemset/problem/445/B*/
#include<bits/stdc++.h>
#define int long long
const int N=1e7+5;
using namespace std;;
vector<int> v[N];
vector<bool>vis(N);
void bfs(int src){
    queue<int>q;
    q.push(src);
    vis[src]=1;
    while(!q.empty()){
        int tmp=q.front();
        q.pop();
        for(auto it:v[tmp]){
            if(!vis[it]){
                q.push(it);
                vis[it]=1;
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
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            bfs(i);
            cnt++;
        }
    }
    cout<<(1LL<<(n-cnt));
}
