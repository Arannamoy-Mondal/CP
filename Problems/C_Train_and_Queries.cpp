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
  int n,q;
  cin>>n>>q;
  int a[n];
  ffor(i,0,n)
  {
    int t;
    cin>>t;
    //if(i && a[i-1]==t)continue;
    a[i]=t;
  }
  while(q--)
  {
    int l,r;
    cin>>l>>r;
    if(find(a,a+n,l) == a+n || find(a,a+n,r) == a+n)
    {
        cout<<"NO"<<nl;
        continue;
    }
    int trk=0,flag1=0,flag2=0;
    ffor(i,0,n)
    {
        debug(a[i])
        if(a[i]==l)
        {
            flag1=1;
            trk=i;
            break;
        }
    }
    ffor(i,trk+1,n)
    {
        debug(a[i])
        if(a[i]==r)
        {
            flag2=1;
            break;
        }
    }
    sep(-)
    if(flag1 && flag2)
    {
        cout<<"YES"<<nl;
        continue;
    }
    cout<<"NO"<<nl;
    sep(*)
  }
}