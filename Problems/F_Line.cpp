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
    int n,ans=0;
    string s;
    cin>>n>>s;
    ffor (i,0,n)
    {
        if (s[i] == 'L')ans+=i;
        else ans += (n-i-1);
    }
    int l=0,r=n-1;
    ffor(i,0,n)
    {
        if (l>r)
        {
            cout<<ans<<blk;
            continue;
        }
        int l1,l2,r1,r2;
        if (s[l]=='L')
        {
            l1=l;
            l2=n-l-1;
        }
        else
        {
            l1=n-l-1;
            l2=l;
        }
        while (l<n-1 && l1>=l2)
        {
            l++;
            if (s[l]=='L')
            {
                l1=l;
                l2=n-l-1;
            }
            else
            {
                l1=n-l-1;
                l2=l;
            }
        }
        if (s[r]=='L')
        {
            r1=r;
            r2=n-r-1;
        }
        else
        {
            r1=n-r-1;
            r2=r;
        }
        while (r>0 && r1>=r2)
        {
            r--;
            if (s[r] == 'L')
            {
                r1=r;
                r2=n-r-1;
            }
            else
            {
                r1=n-r-1;
                r2=r;
            }
        }
        if (l<=r)
        {
            if ((l2 - l1)>=(r2 - r1))
            {
                ans=ans-l1+l2;
                if (s[l]=='L')s[l]='R';
                else s[l]='L';
            }
            else
            {
                ans=ans-r1+r2;
                if(s[r]=='L')s[r]='R';
                else s[r] = 'L';
            }
        }
        cout<<ans<<blk;
    }
    cout<<nl;
}