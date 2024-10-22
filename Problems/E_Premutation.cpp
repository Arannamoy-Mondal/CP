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
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
  int a[n+5][n];
  ffor(i,1,n+1)
  {
    ffor(j,1,n)cin>>a[i][j];
  }
  map<int,int>mp1,mp2;
  ffor(i,1,n+1)
  {
    mp1[a[i][n-1]]=i;
    mp2[a[i][n-1]]++;
  }
  int cnt=0,res;
  for(auto &[x,y]:mp2)
  {
    if(y==1)cnt=x;
    else res=x;
  }
  ffor(i,1,n)cout<<a[mp1[cnt]][i]<<blk;
  cout<<res<<nl;
}