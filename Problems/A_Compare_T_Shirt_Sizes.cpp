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
            res%=N;
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
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  string s1,s2;
  cin>>s1>>s2;
  int cnt1=count(s1.begin(),s1.end(),'X'),
  cnt2=count(s2.begin(),s2.end(),'X');
  if(s1==s2)cout<<"="<<nl;
  else if(find(s1.begin(),s1.end(),'S')!=s1.end()
  && find(s2.begin(),s2.end(),'S')!=s2.end())
  {
    debug(2)
    if(cnt1<cnt2)cout<<">"<<nl;
    else cout<<"<"<<nl;
  }
  else if(find(s1.begin(),s1.end(),'M')!=s1.end()
  && find(s2.begin(),s2.end(),'M')!=s2.end())
  {
    debug(3)
    if(cnt1>cnt2)cout<<">"<<nl;
    else cout<<"<"<<nl;
  }
  else if(find(s1.begin(),s1.end(),'L')!=s1.end()
  && find(s2.begin(),s2.end(),'L')!=s2.end())
  {
    debug(4)
    if(cnt1>cnt2)cout<<">"<<nl;
    else cout<<"<"<<nl;
  }
  else if(find(s1.begin(),s1.end(),'S')!=s1.end()
  && find(s2.begin(),s2.end(),'M')!=s2.end())
  {
    debug(5)
    cout<<"<"<<nl;
  }
  else if(find(s1.begin(),s1.end(),'S')!=s1.end()
  && find(s2.begin(),s2.end(),'L')!=s2.end())
  {
    debug(6)
    cout<<"<"<<nl;
  }
  else if(find(s1.begin(),s1.end(),'M')!=s1.end()
  && find(s2.begin(),s2.end(),'L')!=s2.end())
  {
    debug(6)
    cout<<"<"<<nl;
  }
  else cout<<">"<<nl;

}