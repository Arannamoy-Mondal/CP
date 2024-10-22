#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
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
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 int ts=1;
 cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    //debug(Testcase_)
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  strring s;
  cin>>s;
  string tmp=s;
  reverse(tmp.begin(),tmp.end());
  map<char,vector<int>pos_s,pos_r;
  rep(i,0,n)
  {
    pos_s[s[i]].pb(i);
    pos_r[r[i]].pb(i);
  }
  vector<int>v(n);
  for(char i='a';i<='z';i++)
  {
    rep(j,0,pos_s[i].size())
    {
        v[pos_r[i][j]]=pos_s[i][j];
    }
  }
  pbds<int>p;
  int ans=0;
  for(int i=n-1;i>=0;i--)
  {
    ans+=p.order_of_key(v[i]);
    p.insrt(v[i]);
  }
  cout<<ans<<nl;
}
