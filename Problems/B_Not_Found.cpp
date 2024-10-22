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
  int a[26]={0};
  string s;
  cin>>s;
  for(auto it:s)
  {
    a[(int)(it-'a')]++;
  }
  for(int i=0;i<26;i++)
  {
    if(a[i]==0)
    {
        cout<<(char)(i+'a');
        return 0;
    }
    debug(a[i]);
  }
  cout<<"None";
 
 
}