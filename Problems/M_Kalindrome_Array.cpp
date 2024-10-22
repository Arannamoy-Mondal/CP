#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rfor(i,in,n) for(int i=n-1;i>=in;i--)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e5+5;
using namespace std;
bool check(vector<int>v)
{
    for(int i=0,j=v.size()-1;i<j;i++,j--)
    {
        if(v[i]!=v[j])return 0;
    }
    return 1;
}
void solve()
{
  int n;
  cin>>n;
  vector<int>v;
  while(n--)
  {
    int t;
    cin>>t;
    v.push_back(t);
  }
  int a,b,flag=0;
  for(int i=0,j=v.size()-1;i<j;i++,j--)
  {
    if(v[i]!=v[j])
    {
        a=v[i];
        b=v[j];
        flag=1;
        break;
    }
  }
  if(flag==0)
  {
    cout<<"YES"<<nl;
    return;
  }
  vector<int>u,w;
    for(auto it:v)
    {
        if(it!=a)
        {
            u.push_back(it);
        }
    }
    for(auto it:v)
    {
        if(it!=b)
        {
            w.push_back(it);
        }
    }
    debug(check(u))
    debug(check(w))
    if(check(u) || check(w))
    {
        cout<<"YES"<<nl;
    }
    else 
    {
        cout<<"NO"<<nl;
    }
   
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}