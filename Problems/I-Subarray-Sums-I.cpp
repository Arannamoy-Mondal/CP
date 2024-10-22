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
 #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   //freopen("ICA-13-o.txt","a",stdout);
   cout<<"*******************"<<nl;
   #endif
 //cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    debug(Testcase_)
    solve();
 }
}
void solve()
{
  int n,k;
  cin>>n>>k;
  int a[n],pre[n];
  cin>>a[0];
  pre[0]=a[0];
  rep(i,1,n)
  {
    cin>>a[i];
    pre[i]=pre[i-1]+a[i];
  }
  map<int,int>mp;
  mp[0]=1;
  int cnt=0;
  rep(i,0,n)
  {
    cnt+=mp[pre[i]-k];
    mp[pre[i]]++;
  }
  cout<<cnt<<nl;
}
