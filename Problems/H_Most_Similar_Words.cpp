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
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    ffor(i,0,n)cin>>s[i];
    int cnt=0,mn=INT_MAX;
    ffor(i,0,n-1)
    {
        ffor(j,i+1,n)
        {
            ffor(k,0,m)
            {
                int mx1=max(s[i][k],s[j][k]),
                mn1=min(s[i][k],s[j][k]);
                cnt=cnt+mx1-mn1;
                debug(s[i][k])
                debug(s[j][k])
                debug(mx1)
                debug(mn1)
                debug(cnt)
                sep(*)  
            }
            mn=min(mn,cnt);
            debug(mn)
            cnt=0;
            sep(-)
        }
    }
    cout<<mn<<nl;
    sep(-)
 }
 

 
}