
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
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bitset<N>isprime;
vector<int>prime,cnt(N);
void sieve()
{
    for(int i=3;i<=N;i+=2)isprime[i]=1;
    isprime[2]=1;
    for(int i=3;i*i<=N;i+=2){
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
    }
    prime.pb(2);
    //for(int i=3;i<=N;i+=2)if(isprime[i])prime.pb(i);
}
bool has_zero(int n)
{
    while(n)
    {
        if(n%10 ==0)return 1;
        n/=10;
    }
    return 0;
}
bool valid(int n)
{
        if(has_zero(n) || !isprime[n])return 0;
        string s=to_string(n);
        for(int i=0;i<s.size();i++)
        {
            string prefix=s.substr(i);
            int prefix_int=stoi(prefix);
            if(!isprime[prefix_int])return 0;
        }
        return 1;
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
        //x%=N,
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
  sieve();
  int total=0;
 for(int i=2;i<=N;i++)
 {
    if(valid(i))total++;
    cnt[i]=total;
 }
 cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    solve();
 }
 cerr<<nl<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 int n;
 cin>>n;
 cout<<cnt[n]<<nl;
}

