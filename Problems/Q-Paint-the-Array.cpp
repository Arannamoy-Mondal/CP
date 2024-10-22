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
  int x;
  vector<int>v(n);
  rep(i,0,n)cin>>v[i];
  int gcd0=v[0],gcd1=v[1];
  for(int i=2;i<n;i+=2)gcd0=__gcd(gcd0,v[i]);
  for(int i=3;i<n;i+=2)gcd1=__gcd(gcd1,v[i]);
  bool flag=1;
  for(int i=0;i<n;i+=2)
  {
    if(v[i]%gcd1 ==0)
    {
    flag=0;
    break;
    }
  }
  if(flag)cout<<gcd1<<nl;
  else{
    flag=1;
    for(int i=1;i<n;i+=2)
    {
        if(v[i]%gcd0 ==0)
        {
            flag=0;
            break;
        }
    }
    if(flag)cout<<gcd0<<nl;
    else cout<<0<<nl;

  }
}
/*
2
0
100
0
3
*/
