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
  int ts;
  cin>>ts;
  while(ts--)
  {
    int n;
    cin>>n;
    vector<char>v;
    for(int i=0;i<26;i++)
    {
        v.push_back((char)(i+'A'));
    }
    if(n%2==0)
    {
        cout<<"YES"<<nl;
        for(int i=0;i<n/2;i++)
        {
            cout<<v[i]<<v[i];
        }
        cout<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
  }

 
}