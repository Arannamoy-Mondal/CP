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
 //cin>>ts;
 rep(Testcase_,1,ts+1)
 {
    debug(Testcase_)
    solve();
 }
}
void solve()
{
  int n,q;
  cin>>n>>q;
  multiset<int>st;
  rep(i,0,n)
  {
    int x;
    cin>>x;
    st.insert(x);
  }
  while(q--)
  {
    int x;
    cin>>x;
    auto tmp=st.lower_bound(x);
    if(*tmp==x && tmp!=st.end())
    {
        cout<<x<<nl;
        st.erase(tmp);
    }
    else if(tmp==st.begin())cout<<-1<<nl;
    else 
    {
        cout<<*prev(tmp)<<nl;
        st.erase(prev(tmp));
    }
    
  }
}
