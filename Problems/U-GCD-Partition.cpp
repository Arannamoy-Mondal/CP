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
  vector<int>v,pre(n);
  int x,sum=0;
  cin>>x;
  v.pb(x);
  sum+=x;
  pre[0]=v[0];
  rep(i,1,n)
  {
    cin>>x;
    v.pb(x);
    pre[i]=pre[i-1]+x;
    sum+=x;
  }
  int mx=1;
  rep(i,0,n-1)
  {
    //pre[i]
    mx=max(mx,__gcd(pre[i],sum-pre[i]));
  }
  cout<<mx<<nl;
  sep(*)
}
/*
4
1
5
3
1
21
*/
