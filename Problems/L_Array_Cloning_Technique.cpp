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
  int n;
  cin>>n;
  int a[n];
  map<int,int>mp;
  ffor(i,0,n)
  {
    cin>>a[i];
    mp[a[i]]++;
  }
  if(mp.size()==1)
  {
    cout<<0<<nl;
    return ;
  }
  int mi=INT_MIN;
  for(auto &[f,s]:mp)
  {
    mi=max(mi,s);
  }
  int ans=0;
  while(mi<n)
  {
     ans=ans+min(mi,n-mi)+1;
     mi+=min(mi,n-mi);
  }
  cout<<ans<<nl;

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