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
 //>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n;
  string a,b;
  cin>>n>>a>>b;
  if(a==b)cout<<a.size();
  else
  {
    int ans=2*n;
    rep(i,0,n)
    {
        string s1=a.substr(n-i),s2=b.substr(0,i);
        if(s1==s2)ans-=i;
    }
    cout<<ans;
  }
}