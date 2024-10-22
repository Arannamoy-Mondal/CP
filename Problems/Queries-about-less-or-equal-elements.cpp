#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
//template <typename T> using 
#define pbds  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>
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
 #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   //freopen("output.txt","w",stdout);
   //cout<<"*******************"<<nl;
 #endif
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
  pbds<int>v;
  rep(i,0,n)
  {
    int x;
    cin>>x;
    v.insert(x);
  }
  rep(i,0,q)
  {
    int x;
    cin>>x;
    cout<<v.order_of_key(x+1)<<blk;
  }
}
