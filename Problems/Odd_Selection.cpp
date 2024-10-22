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
  int n,k;
  cin>>n>>k;
  int a[n],cnt0=0,cnt2=0,ans=0;
  ffor(i,0,n)
  {
    cin>>a[i];
    if(a[i]%2)cnt0++;
    else cnt2++;
    ans+=a[i];
  }
  if(!cnt0)
  {
    cout<<"NO"<<nl;
  }
  else if(k==n)
  {
    if(ans%2)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
  }
  else
  {
    if(cnt2)cout<<"YES"<<nl;
    else 
    {
        if(k%2)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }
  }

}
//   if(v.size()%2==1  /*&& v[0]+1 ==v[1]*/)cout<<"NO"<<nl;
//   else if(v.size()==2 && v[0]+1 == v[1])cout<<"NO"<<nl;
//   else cout<<"YES"<<nl;