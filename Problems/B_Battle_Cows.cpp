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
  int n,m,k;
  cin>>n>>m>>k;
  vector<int>v(n+1);
  ffor(i,1,n+1)cin>>v[i];
  sort(v.begin()+1,v.end()+1);
  int res=0;
  ffor(i,1,n+1)
  {
    // if(k<m)
    // {
    //     res+=((i-1)*m +v[i])*k;
    //     break;
    // }
    // else 
    // {
    //     res+=((i-1)*m+v[i])*m;
    //     k-=m;
    // }
    if(k>=m)
    {
        res+=((i-1)*m + v[i])*m;
        k-=m;
        continue;
    }
    else
    {
        res+=((i-1)*m +v[i])*k;
        break;
    }
  }
  cout<<res<<nl;
}