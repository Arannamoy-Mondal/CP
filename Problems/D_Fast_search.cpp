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
const int N=1e9+5;
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
  int a[n];
  map<int,int>mp;
  rep(i,0,n)
  {
    cin>>a[i];
    mp[a[i]]++;
  }
  sort(a,a+n);
  int q;
  cin>>q;
  while(q--)
  {
    int x,y;
    cin>>x>>y;
    auto it1=lower_bound(a,a+n,x),it2=upper_bound(a,a+n,y);
    debug(it1-a)
    debug(it2-a)
    cout<<it2-it1<<blk;
  }
}
