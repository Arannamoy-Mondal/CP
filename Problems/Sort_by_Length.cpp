#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e7+5;
using namespace std;
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            //res%=N;
        }
        x*=x;
        y>>=1;
    }
    return res;
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 cin>>ts;
 ts+=1;
 getchar();
 while(ts--)
 {
  debug(ts)
  vector<string>v;
  string s;
  getline(cin,s);
  debug(s)
  stringstream ss(s);
  string tmp;
  while(ss>>tmp)v.pb(tmp);
  rep(i,0,v.size())
  {
    rep(j,i+1,v.size())
    {
        if(v[i].size()<v[j].size())swap(v[i],v[j]);
    }
  }
  for(auto it:v)cout<<it<<blk;
  cout<<nl;
 }
}
void solve()
{

}