#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    vector<int>v(n+1);
    v.push_back(0);
    for(int i=1;i<=n;i++)cin>>v[i];
    int cnt=0,trc=1;
    for(int i=1;i<=n;i++)
    {
        
        if(trc<v[i])
        {
            cnt+=(v[i]-trc);
            trc=v[i]+1;
        }
        else
        {
            trc++;
        }
    }
    cout<<cnt<<nl;
 }
}