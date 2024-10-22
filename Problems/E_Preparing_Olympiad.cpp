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
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  int n,l,r,x;
  cin>>n>>l>>r>>x;
  int a[n];
  rep(i,0,n)cin>>a[i];
  int cnt=0,ncnt=0;
  rep(i,0,1<<n)
  {
    vector<int>v;
    int tmp=0;
    rep(j,0,n)
    {
        (i & 1<<i)?v.pb(1):v.pb(0);
    }
    int mn=INT_MAX,mx=INT_MIN,int1=0;
    rep(k,0,v.size())
    {
        if(v[k]==1)
        {
            tmp+=a[k];
            // mx=max(mx,a[k]);
            // mn=min(mn,a[k]);
            if(a[k] < mn) mn = a[k];
            if(a[k] > mx) mx = a[k];
            int1++;
        }
    }
    //(int1<2 || mx-mn <x || tmp<l || tmp>r)?ncnt++:cnt++;
    if(int1>1 && mx-mn>=x && tmp>=l && tmp<=r)cnt++;
  }
  cout<<cnt<<nl;
}
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// #define code() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// int main()
// {
//     code();
    
//     ll n,l,r,x; cin>>n>>l>>r>>x;
//     vector<ll>v(n);
//     for(auto &x : v) cin>>x;
 
//     ll cnt = 0;
//     for(int i=0; i<(1<<n); i++)
//     {
//         vector<int>tmp;
//         ll sum = 0;
 
//         for(int j=0; j<n; j++)
//         {
//             if(i & 1<<j) tmp.push_back(1);
//             else tmp.push_back(0);
//         }
 
//         int mn = 1e9;
//         int mx = -1e9;
//         int one = 0;
 
//         for(int k=0; k<tmp.size(); k++)
//         {
//             if(tmp[k] == 1)
//             {
//                 sum += v[k];
//                 if(v[k] < mn) mn = v[k];
//                 if(v[k] > mx) mx = v[k];
//                 one++;
//             }
//         }
 
//         if(one > 1 && mx-mn >= x && sum >= l && sum <= r) cnt++;
//     }
 
//     cout<<cnt<<endl;
 
//     return 0;
// }