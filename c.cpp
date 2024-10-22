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
 int n,k;
 cin>>n>>k;
 vector<int>ans;
 int sum=0;
 rep(i,1,n+1)
 {
    sum+=abs(2*i -n-1);
    ans.pb(i);
 }
 if((k&1)==0 && sum>=k)
 {
    cout<<"YES"<<nl;
    int ind=0;
    int t=n;
    for(;k/2>(t-1);)
    {
        swap(ans[ind],ans[n-ind-1]);
        k+=2;
        k-=t*2;
        t-=2;
        ind++;
    }
    k/=2;
    swap(ans[ind],ans[ind+k]);
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<blk;
    cout<<nl;
 }
 else cout<<"NO"<<nl;

}
/*
Yes
3 1 2
No
Yes
1 2 3 4 5 6 7
No
Yes
8 2 3 4 5 6 1 7
No
Yes
5 4 3 1 2
Yes
2 1 3 4 5

*/