#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) std::cout<<#a<<blk<<a<<nl;
#define sep(a) std::cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e5+5;
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
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n,k;
  cin>>n>>k;
  map<int,pair<int,int>>mp;
  for(int i=0;i<n;i++)
  {
    int x;
    cin>>x;
    if(!mp.count(x))
    {
        mp[x].first=i;
        mp[x].second=i;
    }
    else mp[x].second=i;
  }
  rep(i,0,k)
  {
    int a,b;
    cin>>a>>b;
    debug(mp[a].first)
    debug(mp[b].second)
    if(!mp.count(a) or !mp.count(b) or mp[a].first > mp[b].second)cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
  }
}