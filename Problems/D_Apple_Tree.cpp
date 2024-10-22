#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rfor(i,in,n) for(int i=n-1;i>=in;i--)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e5+5;
using namespace std;
vector<int> v[N];
int vis[N];
void reset()
{
    for(int i=0;i<=N;i++)vis[i]=0;
}
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            res%=N;
        }
        x*=x;
        y>>=1;
    }
    return res;
}
void dfs(int src)
{
    vis[src]=1;
    for(auto it:v[src])
    {
        if(it!=vis[src])
        {
            //vis[src]+=vis[it];
            dfs(it);
            vis[src]+=vis[it];
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
    reset();
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  ffor(i,0,n)
  {
    int a,b;
    cin>>a>>b;
    v[a].pb(b);
    v[b].pb(a);
  }
  dfs(1);
  int k,q;
  cin>>q;
  while(q--)
  {
    int l,r;
    cin>>l>>r;
    cout<<vis[l]*vis[r]<<nl;
  }
}