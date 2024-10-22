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
 int n,c;
 cin>>n>>c;
 vector<int>v(n);
 rep(i,0,n)
 {
    cin>>v[i];
    if(i==0)v[i]+=c;
 }
 int id=0,m=v[0];
 rep(i,0,n)
 {
    if(m>=v[i])continue;
    m=v[i],id=i;
 }
 int tmp=0;
 vector<int>ans;
 rep(i,0,n)
 {
    tmp+=v[i];
    if(i!=id && tmp>=m)ans.pb(i);
    else if(i!=id && tmp<m)ans.pb(i+1);
    else ans.pb(0);
 }
 for(auto it:ans)cout<<it<<blk;
 vector<int>v;
 cout<<nl;
}
/*
0 1 2
1 0
0 1 2 3 4
1 0 2 3
1 1 2 0 4 5

*/