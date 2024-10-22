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
 //cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    debug(Testcase_)
    solve();
 }
}
void solve()
{
  int n;
  cin>>n;
//   bool prime[n+1]={0};
//   for(int i=2;i*i <=n;i++)
//   {
//     if(!prime[i])
//     {
//         for(int j=i+i;j<=n;j+=i)
//         {
//             prime[j]=1;
//         }
//     }
//   }
//   int cnt=0;
//   rep(i,2,n+1)
//   {
//     if(!prime[i])
//     {
//         cout<<i<<blk;
//         cnt++;
//     }
//   }
  cout<<((n%2)?n/2:(n/2))<<nl;
  if(n%2)
  {
    int sum=3;
    while(sum<n)
    {
        cout<<2<<blk;
        sum+=2;
    }
    cout<<3<<nl;
  }
  else rep(i,0,n/2)cout<<2<<blk;
}