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
    for(int i=3;i*i <N;i+=2)
    {
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
    }
    isprime[2]=1;
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
sieve();
 int ts=1;
 //cin>>ts;
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
 while(1)
 {
    cin>>n;
    if(n==0)break;
    int tmp=n;
    map<int,int>mp;
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
    cout<<n<<blk<<": "<<mp.size()<<nl;
    
 }
}
/*
289384 : 3
930887 : 2
692778 : 5
636916 : 4
747794 : 3
238336 : 3
885387 : 2
760493 : 2
516650 : 3
641422 : 3
*/