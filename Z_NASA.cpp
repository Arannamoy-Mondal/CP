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
const int N=1<<15;
using namespace std;
vector<int>v;
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
bool palindrome(int n)
{
    string s=to_string(n);
    for(int i=0;i<(s.size())/2;i++)
    {
        if(s[i]!=s[s.size()-i-1])return 0;
    }
    return 1;
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 rep(i,0,N+5)
 {
    if(palindrome(i))v.pb(i);
 }
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
  int a[n],fre[1<<15]={0};
  rep(i,0,n)cin>>a[i],fre[a[i]]++;
  int cnt=n;
  rep(i,0,n)
  {
    for(auto it:v)
    {
        cnt+=fre[a[i]^it];
    }
  }
  debug(v.size())
  cout<<cnt/2<<nl;
}