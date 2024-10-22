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
 #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   //freopen("ICA-13-o.txt","a",stdout);
   cout<<"*******************"<<nl;
   #endif
 cin>>ts;
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
  if(x>y)
  {
    if(x&1)cout<<(x-1)*(x-1)+y<<nl;
    else cout<<x*x -y+1<<nl;
  }
  else 
  {
    if(!(y&1))cout<<(y-1)*(y-1)+x<<nl;
    else cout<<(y*y)-x+1<<nl;
  }
}
