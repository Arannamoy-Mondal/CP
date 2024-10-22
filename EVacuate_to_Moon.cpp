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
  int n,m,h;
  cin>>n>>m>>h;
  int a[n],b[m];
  rep(i,0,n)cin>>a[i];
  rep(i,0,m)cin>>b[i];
  sort(a,a+n,greater<int>());
  sort(b,b+m,greater<int>());
  int sum=0;
  rep(i,0,min(m,n))((b[i]*h)>a[i])?sum+=a[i]:sum+=(b[i]*h);
  cout<<sum<<nl;
}