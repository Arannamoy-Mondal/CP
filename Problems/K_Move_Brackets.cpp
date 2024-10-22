/*https://codeforces.com/problemset/problem/1374/C*/
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
    cin>>n;
    string s;
    cin>>s;
    stack<char>st;
    for(auto it:s)
    {
        if(!st.empty() && (st.top()=='(' && it==')'))
        {
         st.pop();   
        }
        else 
        {
            st.push(it);
        }
    }
    cout<<st.size()/2<<nl;
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}