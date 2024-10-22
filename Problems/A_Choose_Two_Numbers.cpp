#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rfor(i,in,n) for(int i=n-1;i>=in;i--)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
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
            res%=N;
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
  int m,n;
  cin>>m;
  int a[m];
  ffor(i,0,m)cin>>a[i];
  cin>>n;
  int b[n];
  ffor(i,0,n)cin>>b[i];
  sort(a,a+m),sort(b,b+n);
  ffor(i,0,m)
  {
    ffor(j,0,n)
    {
        debug(*lower_bound(a,a+m,a[i]+b[j]))
        debug(*lower_bound(b,b+n,a[i]+b[j]))
        if(((a[i]+b[j]) != *lower_bound(a,a+m,a[i]+b[j])) && ((a[i]+b[j]) != *lower_bound(b,b+n,a[i]+b[j])))
        {
            cout<<a[i]<<blk<<b[j]<<nl;
            return;
        }
    }
  }
}