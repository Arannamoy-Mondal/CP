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
    int n;
    cin>>n;
    vector<int>v(n),ans;
    ffor(i,0,n)cin>>v[i];
    ffor(i,0,n)
    {
    int t;
    cin>>t;
    string s;
    cin>>s;
    int cnt=v[i];
    for(auto it:s)
    {
        if(it=='D')
        {
            cnt++;
        }
        else if(it=='U')
        {
            cnt--;
        }
        if(cnt==10)
        {
            cnt=0;
        }
        else if(cnt==-1)
        {
            cnt=9;
        }
    }
    ans.pb(cnt);
    }
    for(auto it:ans)
    {
        cout<<it<<blk;
    }
    cout<<nl;
 }
}