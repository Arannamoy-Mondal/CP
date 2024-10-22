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
const int N=1e7+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int dp[N];
bitset<N>isprime;
vector<int>prime;
void sieve()
{
    prime.pb(2);
    for(int i=3;i<=N;i+=2)isprime[i]=1;
    for(int i=3;i*i <=N;i+=2)
    {
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
    }
    for(int i=3;i<=N;i+=2)if(isprime[i])prime.pb(i);
}
int fact(int n)
{
    if(n==0 || n==1)return 1;
    else if(dp[n]!=-1)return dp[n];
    else
    {
        return dp[n]=(fact(n-1)*n)%N;
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
auto cl=clock();
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
for(int i=0;i<N;i++)dp[i]=-1;
 int ts=1;
 sieve();
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
 int n;
 cin>>n;
 map<int,int>mp;
 int tmp=fact(n);
 for(auto it:prime)
 {
    if(it*it >tmp)break;
    if(tmp%it ==0)
    {
        while(tmp%it ==0)
        {
            mp[it]++;
            tmp/=it;
        }
    }
 }
 if(tmp>1)mp[tmp]++;
//  for(auto &[x,y]:mp)
//  {
//     for(int i=1;(i*x)<=n;i++)mp[x]=i*x;
//  }
 cout<<n<<" = ";
 int i=1;
 for(auto &[x,y]:mp)
 {
    cout<<x<<"("<<y<<")";i++;
    if(i<=mp.size())cout<<" * ";
 }
 cout<<nl;

}
/*
Case 1: 2 = 2 (1)
Case 2: 3 = 2 (1) * 3 (1)
Case 3: 6 = 2 (4) * 3 (2) * 5 (1)
*/