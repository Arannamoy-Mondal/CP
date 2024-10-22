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
bitset<N>isprime;
vector<int>prime;
void sieve()
{
    for(int i=3;i<=N;i+=2)isprime[i]=1;
    prime.pb(2);
    for(int i=3;i*i <=N;i+=2)
    {
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
    }
    for(int i=3;i<=N;i+=2)if(isprime[i])prime.pb(i);
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
 int ts=1;
 //cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    solve();
 }
cerr<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 sieve();
 int n;
 cin>>n;
 if(n==3)
 {
    cout<<1<<nl<<n<<nl;
    return;
 }
 vector<int>ans;
 for(auto it:prime)
 {
    while(n>=it && (n-it)!=1)
    {
        ans.pb(it);
        n-=it;
    }
 }
 if(n>1)ans.pb(n);
 cout<<ans.size()<<nl;
 for(auto it:ans)cout<<it<<blk;
}