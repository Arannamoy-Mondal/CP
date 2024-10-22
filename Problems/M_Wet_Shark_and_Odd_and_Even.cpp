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
  int a[n],sum=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    sum+=a[i];
  }
  if(sum%2==0)
  {
    cout<<sum;
    return 0;
  }
  sort(a,a+n,greater<int>());
  for(int i=n-1;i>=0;i--)
  {
    if(a[i]%2!=0)
    {
        cout<<sum-a[i];
        return 0;
    }
  }
}