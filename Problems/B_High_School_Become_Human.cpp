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
 //cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    debug(Testcase_)
    solve();
 }
}
void solve()
{
  int x,y;
  cin>>x>>y;
//   debug(power(x,y))
//   debug(power(y,x))
//   if(power(x,y)>power(y,x))cout<<">"<<nl;
//   else if(power(x,y)==power(y,x))cout<<"="<<nl;
//   else cout<<"<"<<nl;
  debug(x*log10(y))
  debug(y*log10(x))
  if(x*(log10(y))<y*(log10(x)))cout<<">"<<nl;
  else if(x*(log10(y))==y*(log10(x)))cout<<"="<<nl;
  else cout<<"<"<<nl;
}
