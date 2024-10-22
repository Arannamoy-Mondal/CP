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
void solve()
{
  int n,k;
  cin>>n>>k;
  int a[n];
  ffor(i,0,n)cin>>a[i];
  map<int,int>mp;
  int res=0,i=0,j=0,cnt=0;
  while (j<n)
    {
        mp[a[j]]++;
        if(mp[a[j]]==1)cnt++;
        if(cnt<=k)
        {
            res+=(j-i+1);
            //continue;
        }
        else
        {
            while(cnt>k)
            {
                mp[a[i]]--;
                //i++;
                if (mp[a[i]]==0)cnt--;
                i++;
                if(cnt == k)res+=(j-i+1);
                //i++;
            }
        }
        j++;
    }
    cout<<res;
}
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts=1;
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}