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
  pair<int,int> a[n],p[n];
  int ata=0,atp=0,dfa=0,dfp=0;
  ffor(i,0,n)
  {
    cin>>a[i].first;
    ata+=a[i].first;
  }
  ffor(i,0,n)
  {
    cin>>a[i].second;
    dfa+=a[i].second;
  }
  ffor(i,0,n)
  {
    cin>>p[i].first;
    atp+=p[i].first;
  }
  ffor(i,0,n)
  {
    cin>>p[i].second;
    dfp+=p[i].second;
  }
  if(ata<atp && dfa<dfp)cout<<"P"<<nl;
  else if(ata>atp && dfa>dfp)cout<<"A"<<nl;
  else cout<<"DRAW"<<nl;
}
