#include<bits/stdc++.h>
using namespace std;
int32_t main()
{
  int n;
  cin>>n;
  vector<int>v;
  for(int i=2;i*i<=n;i++)
  {
    if(n%i ==0)
    {
      while(n%i ==0)
      {
        v.push_back(i);
        n/=i;
      }
    }
  }
  for(auto it:v)cout<<it<<" ";
}