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
using namespace std;
using namespace __gnu_pbds;
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
 //cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    //debug(Testcase_)
    solve();
 }
}
void solve()
{
  int n,k;
  cin>>n>>k;
  vector<int>a(n);
  rep(i,0,n)cin>>a[i];
  int l=0,r=0;
  pbds<pair<int,int>>p;
  while(r<n)
  {
    p.insert({a[r],r});
    if(r-l+1 ==k)
    {
        int tmp=k/2;
        if(k%2 ==0)tmp--;
        auto it=p.find_by_order(tmp);
        cout<<it->first<<blk;
        p.erase({a[l],l});
        l++;
    }
    r++;
  }
  cout<<nl;
}
