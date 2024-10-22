#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define int unsigned long long
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
const int N=1e4+5,mod=10000007;
//using namespace __gnu_pbds;
using namespace std;
int dp[N];
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
int a, b, c, d, e, f;
int fn(int n) {
    if (n == 0) return dp[n]=a;
    else if (n == 1) return dp[n]=b;
    else if (n == 2) return dp[n]=c;
    else if (n == 3) return dp[n]=d;
    else if (n == 4) return dp[n]=e;
    else if (n == 5) return dp[n]=f;
    else if(dp[n]!=-1)return dp[n];
    else 
    {
        dp[n]=((fn(n-1)%mod) + (fn(n-2)%mod) + (fn(n-3)%mod) + (fn(n-4)%mod) + (fn(n-5)%mod) + (fn(n-6)%mod))%mod;
        return dp[n];
    }
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 int ts=1;
 cin>>ts;
 rep(t,1,ts+1)
 {
    rep(i,0,N+5)dp[i]=-1;
    //debug(t)
    cout<<"Case "<<t<<": ";
    solve();
 }
}
void solve()
{
 int n;
 cin>>a>>b>>c>>d>>e>>f>>n;
 int ans=fn(n);
 cout<<ans%mod<<nl;
}
/*
Case 1: 216339
Case 2: 5333347
Case 3: 79
Case 4: 16636
Case 5: 6
Case 6: 54
*/