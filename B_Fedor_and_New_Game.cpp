//https://codeforces.com/problemset/problem/467/B
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
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>v(m+1);
  ffor(i,0,m+1)cin>>v[i];
  vector<vector<int>>vi;
  ffor(i,0,m+1)
  {
    vector<int>tmp;
    ffor(k,0,n)
    {
        if((v[i]>>k)&1)tmp.pb(1);
        else tmp.pb(0);
    }
    vi.pb(tmp);
  }
  int cnt=0;
  vector<int>fedor_mask=vi[m];
  ffor(i,0,vi.size()-1)
  {
    vector<int>tmp=vi[i];
    int cnt1=0;
    ffor(k,0,n)
    {
        if(fedor_mask[k]!=tmp[k])cnt1++;
    }
    if(cnt1<=k)cnt++;
  }
  cout<<cnt;
}
