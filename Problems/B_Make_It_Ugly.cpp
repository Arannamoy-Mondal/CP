// #include<bits/stdc++.h>
// #define int long long
// #define nl "\n"
// #define blk " "
// #define rep(i,in,n) for(int i=in;i<n;i++)
// #define pb push_back
// #ifndef ONLINE_JUDGE
// #define debug(a) cout<<#a<<blk<<a<<nl;
// #define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
// #else
// #define debug(a)
// #define sep(a)
// #endif
// const int N=1e5+5;
// using namespace std;
// int power(int x,int y)
// {
//     int res=1;
//     while(y)
//     {
//         if(y&1)
//         {
//             res*=x;
//             //res%=N;
//         }
//         x*=x;
//         y>>=1;
//     }
//     return res;
// }
// void solve();
// int32_t main()
// {
//  ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//  int ts=1;
//  cin>>ts;
//  while(ts--)
//  {
//     solve();
//  }
// }
// void solve()
// {
//   int n;
//   cin>>n;
//   vector<int>v(n);
//   set<int>st;
//   rep(i,0,n)cin>>v[i];
//   for(auto it:v)st.insert(it);
//   if(st.size()>1)
//   {
//     int cnt=0,res=n;
//     for(auto it:v)
//     {
//         if(it!=*v.begin())
//         {
//             res=min(res,cnt);
//             cnt=0;
//             continue;
//         }
//         cnt++;
//     }
//     res=min(res,cnt);
//     cout<<res<<nl;
//   }
//   else cout<<-1<<nl;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t; 
    while(t--){ 
        int n;cin>>n; 
        vector<int> v; 
           map<int,int> ma; 
        for(int i=0;i<n;i++){ 
            int x;cin>>x; 
            v.push_back(x); 
            ma[x]++; 
        } 
        if(ma.size()==1){ 
            cout<<-1<<endl; 
            continue; 
        } 
        int x=v[0]; 
        int ix=0; 
        int ans=n; 
 
        for(int i=0;i<n;i++){ 
            if(v[i]==v[0]){ 
                ix++; 
            } 
            else{ 
                
                ans=min(ans,ix); 
                ix=0; 
            } 
 
        } 
        ans=min(ans,ix); 
 
        cout<<ans<<endl; 
 }
}
