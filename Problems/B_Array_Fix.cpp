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
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin>>tmp;
        v.push_back(tmp);
    }
    bool flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]>9 && (v[i]/10>v[i+1] || v[i]%10>v[i+1]))
        {
            flag=0;
            break;
        }
    }
    if(flag)
    {
        cout<<"YES"<<nl;
    }
    else
    {
        cout<<"NO"<<nl;
    }
  }
}