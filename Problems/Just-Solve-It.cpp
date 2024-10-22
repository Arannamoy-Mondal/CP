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
const int N=1e7+7;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
bitset<N>isprime;
vector<int>prime;
void sieve()
{
    for(int i=3;i<=N;i+=2)isprime[i]=1;
    isprime[2]=1;
    for(int i=3;i*i<=N;i+=2)
    {
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
    }
    prime.pb(2);
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
            res%=N;
        }
        x*=x;
        x%=N,
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
 int lpf=1e18,gpf=2,sod=1,nod=1;
 map<int,int>mp;
 for(auto it:prime)
 {
    if(it*it >n)break;
    if(n%it ==0)
    {
        lpf=min(lpf,it);
        gpf=max(gpf,it);
        while(n%it ==0)
        {
            mp[it]++;
            n/=it;
        }
    }
 }
 if(n>1)mp[n]++,lpf=min(lpf,n),gpf=max(gpf,n);
 for(auto &[x,y]:mp)nod*=(y+1);
 int psi=0;
 for(auto &[x,y]:mp)
 {
    int t=y,tmp=0;
    while(t>=0)
    {
        tmp+=power(x,t);
        t--;
    }
    sod*=tmp;
    psi+=y;
 }
 cout<<lpf<<blk<<gpf<<blk<<mp.size()<<blk<<psi<<blk<<nod<<blk<<sod<<nl;
}
/*
3 3 1 1 2 4
5 5 1 1 2 6
2 3 2 2 4 12
2 2 1 3 4 15
2 5 2 2 4 18
*/