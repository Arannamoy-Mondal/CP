#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#define sep cout<<"---------------"<<endl;
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int n,s;
 cin>>n>>s;
 int cnt=0;
 for(int i=0;i<=n;i++)
 {
    for(int j=0;j<=n;j++)
    {
        if((s-i-j)<=n && (s-i-j)>=0)
        {
            cnt++;
        }
    }
 }
 cout<<cnt;
}