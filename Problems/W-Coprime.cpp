#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
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
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
  int a[1010]={0};
  map<int,int>mp;
  int x,mx=-1;
  rep(i,0,n)
  {
    cin>>x;
    a[x]=i+1;
    mp[x]++;
    mx=max(x,mx);
  }
  int mxg=-1;
  rep(i,1,mx+1)
  {
    rep(j,1,mx+1)
    {
        if(mp.count(i) && mp.count(j) &&__gcd(i,j)==1 && mxg<(a[i]+a[j]))
        {
            debug(i)
            debug(j)
            debug(__gcd(i,j))
            debug(a[i])
            debug(a[j])
            mxg=a[i]+a[j];
            debug(mxg)
            sep(-)
        }
    }
  }
  cout<<mxg<<nl;
  sep(*)
}
/*
6
12
9
-1
10
7
*/
