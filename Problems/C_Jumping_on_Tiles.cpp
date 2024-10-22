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
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  string s;
  cin>>s;
  map<char,vector<int>>mp;
  rep(i,0,s.size())mp[s[i]].pb(i);
  int trk;
  if(s[0]-s[s.size()-1] <0)trk=1;
  else trk=-1;
  vector<int>ans;
  for(auto i=*s.begin();i!= *s.end()+trk; i+=trk)
  {
    for(auto it:mp[i])ans.pb(it);
  }
  int cost=0;
  rep(i,1,ans.size())cost+=(abs(s[ans[i]]-s[ans[i-1]]));
  cout<<cost<<blk<<ans.size()<<nl;
  for(auto it:ans)cout<<it+1<<blk;
  cout<<nl;
}