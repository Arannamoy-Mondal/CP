#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
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
const int N=1e6+5;
const int mod=1000003;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int dp[N];
int fact(int n)
{
    if(n==0 || n==1)return dp[n]=1;
    else if(dp[n]!=-1)return dp[n];
    else 
    {
        return dp[n]=(fact(n-1)*n)%mod;
    }
}
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            res%=mod;
        }
        x*=x;
        x%=mod;
        y>>=1;
    }
    return res;
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
auto cl=clock();
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 rep(i,0,N)dp[i]=-1;
 int ts=1;
 cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    cout<<"Case "<<t<<": ";
    solve();
 }
cerr<<nl<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 int n,k;
 cin>>n>>k;
 int ans=fact(n)*power(fact(n-k)*fact(k)%mod,mod-2)%mod;
 cout<<ans<<nl;
}