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
  string s;
  cin>>s;
  int cnt=0;
  for(auto it:s)
  {
    if(it=='1')cnt+=2;
    else if(it=='2')cnt+=5;
    else if(it=='3')cnt+=5;
    else if(it=='4')cnt+=4;
    else if(it=='5')cnt+=5;
    else if(it=='6')cnt+=6;
    else if(it=='7')cnt+=3;
    else if(it=='8')cnt+=7;
    else if(it=='9')cnt+=6;
    else if(it=='0')cnt+=6;
  }
  cout<<cnt<<blk<<"leds"<<nl;
}