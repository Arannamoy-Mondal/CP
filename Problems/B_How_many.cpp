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
 int s,t;
 cin>>s>>t;
 int cnt=0;
 for(int i=0;i<=100;i++)
 {
    for(int j=0;j<=100;j++)
    {
        for(int k=0;k<=100;k++)
        {
            if((i+j+k)<=s && (i*j*k)<=t)
            {
                cnt++;
            }
        }
    }
 }
 cout<<cnt;
}