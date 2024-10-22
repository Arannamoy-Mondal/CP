#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i, in, n) for (int i = in; i < n; i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cerr << #a << blk << a << nl;
#define sep(a) cerr << #a << #a << #a << #a << #a << #a << #a << endl;
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
        // x%=N,
        y >>= 1;
    }
    return res;
}
void solve();
int32_t main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    auto cl = clock();
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
#endif
    int ts = 1;
    cin >> ts;
    rep(t, 1, ts + 1)
    {
        debug(t)
            solve();
        sep(*)
    }
    auto Total_Time = 1.00 * (clock() - cl) / CLOCKS_PER_SEC;
    debug(Total_Time)
}
void solve()
{
    int a, b;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    if (((a * b) / gcd) == b)
    {
        for (int i = 2; i * i <= b; i++)
        {
            if (i <= a && a % i == 0)
            {
                cout << b * i << nl;
                return;
            }
            else if (b % i == 0)
            {
                cout << b * i << nl;
                return;
            }
        }
        cout << b * b << nl;
    }
    else
    {
        cout << (a * b) / gcd << nl;
    }
}
/*
6
4
33
25
20
12
27
1000000000
*/