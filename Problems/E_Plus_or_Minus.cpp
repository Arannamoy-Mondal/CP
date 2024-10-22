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
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n=3;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    if((a[0]+a[1]) ==a[2])
    {
        cout<<"+"<<nl;
    }
    else cout<<"-"<<nl;
 }
}