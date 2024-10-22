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
  int n;
  cin>>n;
  string s;
  cin>>s;
  string res="";
  for(int i=n-1;i>=0;i--)
  {
    if(s[i]=='0')
    {
        res+=(char)(((s[i-1]-'0')+((s[i-2]-'0')*10))+'a'-1);
        i-=2;
        continue;
    }
    res+=(char)((s[i]-'0')+'a'-1);
  }
  reverse(res.begin(),res.end());
  cout<<res<<nl;
}