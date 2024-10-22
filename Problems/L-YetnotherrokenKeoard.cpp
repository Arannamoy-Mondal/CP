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
 #ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   //freopen("ICA-13-o.txt","a",stdout);
   cout<<"*******************"<<nl;
   #endif
 int ts=1;
 cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    //debug(Testcase_)
    solve();
 }
}
void solve()
{
  string s;
  cin>>s;
  vector<int>u,l,v;
  for(int i=0;i<s.size();i++)
  {
    if(s[i]>='a' && s[i]<='z' && s[i]!='b')l.pb(i);
    else if(s[i]>='A' && s[i]<='Z' && s[i]!='B')u.pb(i);
    else if(s[i]=='b' && !l.empty())
    {
        l.pop_back();
    }
    else if(s[i]=='B' && !u.empty())
    {
        u.pop_back();
    }
  }
    for(auto it:u)v.pb(it);
    for(auto it:l)v.pb(it);
    sort(v.begin(),v.end());
    for(auto it:v)cout<<s[it];
    cout<<nl;
}