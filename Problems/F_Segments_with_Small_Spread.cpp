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
void solve()
{
    int n;
    int  k;
    cin >> n >> k;
    int a[n];
    ffor(i,0,n)cin>>a[i];
    int l = 0, r = 0, ans = 0;
    multiset<int>ms;
    while (r < n) 
    {
        ms.insert(a[r]);
        int mn, mx;
        mn=*ms.begin(),mx=*ms.rbegin();
        if ((mx-mn)<=k) 
        {
            ans+=(r-l+1);
        }
        else {
            while (l<r) 
            {
                mn=*ms.begin(),mx=*ms.rbegin();
                if ((mx-mn)<=k) 
                {
                    break;
                }
                auto it=ms.find(a[l]);
                ms.erase(it);
                l++;
            }
            mn=*ms.begin(),mx=*ms.rbegin();
            if ((mx-mn)<=k) 
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout << ans <<nl;

}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}