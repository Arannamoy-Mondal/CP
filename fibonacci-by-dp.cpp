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
const int N=1e7+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int dp[N];
int fibo(int n)
{
    if(n==0)return dp[n]=0;
    else if(n==1)return dp[n]=1;
    else if(dp[n]!=-1)return dp[n];
    else 
    {
        dp[n]=fibo(n-1)+fibo(n-2);
        cout<<dp[n]<<nl;
        return dp[n];
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
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 rep(i,0,N)dp[i]=-1;
 int ts=1;
 cin>>ts;
 cout<<fibo(ts)<<nl;
 rep(Testcase_,0,ts+1)
 {
    debug(dp[Testcase_])
    //solve();
 }
}
void solve()
{
 
}
/*0 1 1 2 3 5 8*/