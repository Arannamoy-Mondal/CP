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
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int a,b;
  cin>>a>>b;
  if((a>=0 && b<=0)||(a<=0 && b>=0))cout<<"Zero"<<nl;
  else if(a>0 && b>0)cout<<"Positive"<<nl;
  else
  {
    int l=0;
    if(a<0 && b<0)l=abs(b)-abs(a)-1;
    debug(l)
    if(l%2 ==0)cout<<"Positive"<<nl;
    else cout<<"Negative"<<nl;
  }
}