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
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","a",stdout);
  cout<<"*******************"<<nl;
  #endif
 int n;
 cin>>n;
 int a[n+1]={0};
 for(int i=0;i<n;i++)
 {
    int t;
    cin>>t;
    a[t]=1;
 }
 for(int i=1;i<=n;i++)
 {
    if(a[i]==0)
    {
        cout<<i;
        return 0;
    }
 }
 
}