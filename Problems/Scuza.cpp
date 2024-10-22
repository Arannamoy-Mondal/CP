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
 #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   //cout<<"*******************"<<nl;
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
  int n,q;
  cin>>n>>q;
  vector<int>v,vmax;
  int x;
  v.pb(0);
  rep(i,0,n)
  {
    cin>>x;
    v.pb(v.back()+x);
    if(i==0)vmax.pb(x);
    else vmax.pb(max(vmax.back(),x));
  }
  rep(i,0,q)
  {
    cin>>x;
    cout<<v[upper_bound(vmax.begin(),vmax.end(),x)-vmax.begin()]<<blk;
  }
  cout<<nl;
}
