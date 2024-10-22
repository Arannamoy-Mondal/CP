#include<bits/stdc++.h>
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
const int N=1e5+5;
using namespace std;
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
 int ts=1;
 if(1)cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
        int n; 
        cin>>n; 
        if(n!=1)
        {
            cout<<n*(n+1)*(4*n -1)/6<<blk<<2*n -1<<nl;
            cout<<1<<blk<<n<<blk;
            rep(i,1,n+1)cout<<i<<blk;
            cout<<nl;
            int tmp=n-1;
            rep(i,2,2*n -1+1)
            {
                cout<<2<<blk<<tmp<<blk;
                rep(i,2,tmp+1)cout<<i<<blk;
                cout<<nl;
                cout<<1<<blk<<tmp<<blk;
                rep(i,1,tmp+1)cout<<i<<blk;
                cout<<nl;
                tmp--;
            }
            return;
        }
        cout<<1<<blk<<1<<nl;
        cout<<1<<blk<<1<<blk<<1<<nl;

}
