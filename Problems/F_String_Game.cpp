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
const int N=1e7+5;
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
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
    string t, p;
    cin >> t>>p;
    int n = t.size(), m = p.size();
    vector<int> a(n);
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }

    auto ok = [&](int mid) {
        vector<bool> bad(n + 1);
        for (int i = 0;i < mid;i++) {
            bad[a[i]] = true;
        }
        int j = 0;
        bool found = false;
        for (int i = 0;i < n;i++) {
            if (t[i] == p[j] && !bad[i + 1]) {
                j++;
            }
            if (j == m) {
                found = true;
                break;
            }
        }
        return found;
        };

    int l = 0, r = n, mid, ans = 0;
    while (l <= r) {
        mid = l + (r - l) / 2;
        if (ok(mid)) {
            ans = mid;
            l = mid + 1;
        }
        else {
            r = mid - 1;
        }
    }

    cout << ans;
}
