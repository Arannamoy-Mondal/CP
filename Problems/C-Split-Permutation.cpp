#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
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
 auto Total_Time=1.00*(clock()-cl)/CLOCKS_PER_SEC;
 debug(Total_Time)
}
void solve()
{
 int n;
 cin>>n;
 if(n<3)rep(i,1,n+1)cout<<i<<blk;
 else {
    if(n&1){
        rep(i,1,(n/2)+1)cout<<i<<blk<<n-i<<blk;
        cout<<n;
    }
    else{
        rep(i,1,(n/2)+1)cout<<i<<blk<<n-i+1<<blk;
    }
 }
 cout<<nl;
}
/*
1
1 2
1 2 3
7
1 6 2 5 3 4 7
6
1 6 2 5 4 3

*/