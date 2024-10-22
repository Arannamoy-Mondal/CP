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
    for(int i=3;i<N;i+=2)isprime[i]=1;
    isprime[2]=1;
    for(int i=3;i*i <=N;i+=2)
    {
        if(isprime[i])for(int j=i*i;j<=N;j+=i)isprime[j]=0;
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
 sieve();
 int ts=1;
 cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    cout<<"Case "<<t<<": ";
    solve();
 }
cerr<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 int p,l;
 cin>>p>>l;
 //if(isprime[p-l])cout<<p-l<<nl;
 set<int>st;
 for(int i=1;i*i <=(p-l);i++)
 {
    if((p-l)%i ==0)
    {
        if(l<(p-l)/i)st.insert((p-l)/i);
        if(l<i)st.insert(i);
    }
 }
 if(st.size()>0)for(auto it:st)cout<<it<<blk;
 else cout<<"impossible";
 cout<<nl;
}
/*
Case 1: 1 2 5 10
Case 2: 11
Case 3: 101 202
Case 4: impossible
*/