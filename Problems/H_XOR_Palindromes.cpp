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
  int n;
  cin>>n;
  string s;
  cin>>s;
  int cnt=0;
  for(int i=0,j=n-1;i<n,j>=0;i++,j--)if(s[i]!=s[j])cnt++;
  cnt/=2;
  if(n&1)
  {
    ffor(i,0,cnt)cout<<'0';
    ffor(i,cnt,n-cnt+1)cout<<'1';
    ffor(i,n-cnt+1,n+1)cout<<'0';
    cout<<nl;
    return;
  }
  ffor(i,0,n-cnt+1)
  {
    if(i<cnt)
    {
        cout<<'0';
        continue;
    }
    if((i-cnt)&1)cout<<'0';
    else cout<<'1';
  }
  ffor(i,0,cnt)cout<<'0';
  cout<<nl;
}