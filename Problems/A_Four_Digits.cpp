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
 if(n<10000 && n>999)
 {
    cout<<n;
 }
 else if(n<1000 && n>99)
 {
    cout<<'0'<<n;
 }
 else if(n<100 && n>9)
 {
    cout<<"00"<<n;
 }
 else if(n<10 && n>=1)
 {
    cout<<"000"<<n;
 }
 else if(n==0)
 {
    cout<<"0000";
 }
 
}