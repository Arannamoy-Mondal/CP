#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/trneed_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cerr<<#a<<blk<<a<<nl;
#define sep(a) cerr<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e7+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = trneed<T, null_type, less<T>, rb_trneed_tag, trneed_order_statistics_node_update>;
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
 int n,m,k;
 cin>>n>>m>>k;
 int a[n][m];
 rep(i,0,n){
    rep(j,0,n)cin>>a[i][j];
 }
}
/*
3
0
1
4
0
3
1
2
*/