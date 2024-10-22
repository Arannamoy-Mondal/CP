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
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            res%N;
        }
        x*=x;
        y>>=1;
    }
    return res;
}
void solve()
{
  int n;
  cin>>n;
  vector<string>v(n);
  map<string,int>mp;
  ffor(i,0,n)
  {
    cin>>v[i];
    mp[v[i]]=1;
  }
  string s="";
  ffor(i,0,n)
  {
    bool flag=0;
    ffor(j,1,v[i].size())
    {
        string s1=v[i].substr(0,j),s2=v[i].substr(j,v[i].size()-j);
        debug(s1)
        debug(s2)
        if(mp[s1] && mp[s2])
        {
            flag=1;
            break;
        }
    }
    sep(-)
    if(flag)s+='1';
    else s+='0';
  }
  cout<<s<<nl;
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}