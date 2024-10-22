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
            res%N;
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
  int n,q;
  cin>>n>>q;
  vector<int>v(n+1),p(n+1);
  cin>>v[1];
  p[1]=v[1];
  ffor(i,2,n+1)
  {
    cin>>v[i];
    p[i]=p[i-1]+v[i];
  }
  while(q--)
  {
    int a,b,c;
    cin>>a>>b>>c;
    if(a==1)
    {
       int sum;
       sum=p[n]-p[b]+(c*(b-a+1));
       if(sum%2)cout<<"YES"<<nl;
       else cout<<"NO"<<nl;
    }
    else
    {
        int sum=p[n]-p[b]-p[a-1]+(c*(b-a+1));
        if(sum%2)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
  }
}