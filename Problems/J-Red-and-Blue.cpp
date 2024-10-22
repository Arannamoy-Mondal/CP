#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i, in, n) for (int i = in; i < n; i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout << #a << blk << a << nl;
#define sep(a) cout << #a << #a << #a << #a << #a << #a << #a << endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N = 1e7 + 5;
// using namespace __gnu_pbds;
using namespace std;
// template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int power(int x, int y)
{
    int res = 1;
    while (y)
    {
        if (y & 1)
        {
            res *= x;
            // res%=N;
        }
        x *= x;
        y >>= 1;
    }
    return res;
}
void solve();
int32_t main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int ts = 1;
    cin >> ts;
    rep(Testcase_, 1, ts + 1)
    {
        // debug(Testcase_)
        solve();
    }
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a;
    while(n--){
        int x;
        cin>>x;
        a.pb(x);
    }
    int m;
    cin>>m;
    vector<int>b;
    while(m--){
        int x;
        cin>>x;
        b.pb(x);
    }
    partial_sum(a.begin(),a.end(),a.begin());
    partial_sum(b.begin(),b.end(),b.begin());
    cout << max(0LL,*max_element(a.begin(),a.end()))+max(0LL,*max_element(b.begin(), b.end()))<<nl;
}
