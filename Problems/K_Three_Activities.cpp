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
  vector<pair<int,int>>a,b,c;
  ffor(i,0,n)
  {
    int t;
    cin>>t;
    a.pb({t,i});
  }
  ffor(i,0,n)
  {
    int t;
    cin>>t;
    b.pb({t,i});
  }
  ffor(i,0,n)
  {
    int t;
    cin>>t;
    c.pb({t,i});
  }
  int mx=INT_MIN;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  rfor(i,n-3,n)
  {
    rfor(j,n-3,n)
    {
        rfor(k,n-3,n)
        {
            if(a[i].second!=b[j].second && a[i].second!=c[k].second
            && b[j].second!=c[k].second)
            {
                mx=max(mx,a[i].first+b[j].first+c[k].first);
            }
        }
    }
  }
  cout<<mx<<nl;
}