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
  int r,c;
  cin>>r>>c;
  int a[r][c];
  ffor(i,0,r)
  {
    ffor(j,0,c)cin>>a[i][j];
  }
  int cnt=0;
  for(int i=0,i1=r-1;i<r,i1>=0;i++,i1--)
  {
    for(int j=0,j1=c-1;i<c,j1>=0;j++,j1--)
    {
        if(a[i][j]!=a[i1][j1])cnt++;
    }
  }
  cout<<cnt<<nl;
}