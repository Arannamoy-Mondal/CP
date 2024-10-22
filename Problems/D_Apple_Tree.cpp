#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define cdebug(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define cdebug(a)
#endif
const int N=2e5+5;
using namespace std;
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            //res%=N;
        }
        x*=x;
        y>>=1;
    }
    return res;
}
vector<int> v[N];
int vis[N];
int pr[N];
void dfs(int src,int pl)
{
    if(v[src].size()==1 && src!=1)
    {
        pr[src]=1;
        return;
    }
    for(auto it:v[src])
    {
        if(it!=pl)
        {
            dfs(it,src);
            pr[src]+=pr[it];
        }
    }
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  rep(i,0,n+5)v[i].clear(),pr[i]=0,vis[i]=0;
  rep(i,0,n-1)
  {
    int a,b;
    cin>>a>>b;
    v[a].pb(b);
    v[b].pb(a);
  }
  dfs(1,0);
  int k;
  cin>>k;
  rep(i,0,k)
  {
    int a,b;
    cin>>a>>b;
    debug(pr[a])
    debug(pr[b])
    debug(-1)
    cout<<pr[a]*pr[b]<<nl;
    cdebug(-)
  }
}