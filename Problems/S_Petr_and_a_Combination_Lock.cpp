#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rrep(i,in,n) for(int i=n-1;i>=in;i--)
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
  vector<int>v(n);
  ffor(i,0,n)
  {
    cin>>v[i];
  }
  ffor(i,0,pow(2,n))
  {
    int sum=0;
    ffor(j,0,n)
    {
      if((i&(1<<j)))sum+=v[j];
      else sum-=v[j];
      sum%=360;
    }
    debug(sum)
    if(sum%360 == 0)
    {
      cout<<"YES"<<nl;
      return;
    }
  }
  cout<<"NO"<<nl;
}