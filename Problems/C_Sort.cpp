#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e7+5;
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
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=0,x;i<n;i++)
  {
    cin>>x;
    v.pb(x);
  }
  vector<pair<int,int>>vi;
  map<int,int>mp;
  rep(i,0,n)
  {
    if(v[i]-1 != i)swap(v[i],v[v[i]-1]);
    if(v[i]-1 != i)vi.pb({i+1,v[i]}),--i;
  }
  cout<<vi.size()<<nl;
  for(auto it:vi)cout<<it.first<<blk<<it.second<<nl;
}