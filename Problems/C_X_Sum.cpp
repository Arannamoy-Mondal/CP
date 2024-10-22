#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rfor(i,in,n) for(int i=n-1;i>=in;i--)
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
            res%=N;
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
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
   int n,m;
    cin>>n>>m;
    int v[n][m];
    ffor(i,0,n)
    {
        ffor(j,0,m)cin>>v[i][j];
    }
    int mx=0;
    ffor(i,0,n)
    {
        ffor(j,0,m)
        {
            int tmp=0;
            int a=i,b=j;
            while(a<n && b<m)
            {
                tmp+=v[a][b];
                a++,
                b++;
            }
            a=i,b=j;
            while(a<n && b>=0)
            {
                tmp += v[a][b];
                a++,
                b--;
            }
            tmp-=v[i][j];
            a=i,
            b=j;
            while(a>=0 && b>=0)
            {
                tmp+=v[a][b];
                a--,
                b--;
            }
            tmp-=v[i][j];
            a=i,
            b=j;
            while(a>=0 && b<m)
            {
                tmp+=v[a][b];
                a--,
                b++;
            }
            tmp-=v[i][j];
            mx=max(mx,tmp);
        }
    }
    cout<<mx<<nl;
}
