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
void solve()
{
  int n,q;
  cin>>n>>q;
  int a[n+1];
  cin>>a[1];
  int p[n+1];
  p[1]=a[1];
  ffor(i,2,n+1)
  {
    cin>>a[i];
    p[i]=p[i-1]+a[i];
  }
  while(q--)
  {
    int s,d,c,sum=p[n];
    cin>>s>>d>>c;
    debug(sum)
    if(s==1)
    {
        sum=sum-p[d]+(d-s+1)*c;
    }
    else sum=sum-p[d]-p[s-1]+(d-s+1)*c;
    debug(p[d-1])
    debug(p[s])
    debug(sum)
    if(sum%2)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
    debug(p[d]-p[s-1])
  }
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}