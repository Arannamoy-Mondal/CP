#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
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
    char c;
    string s;
    cin>>n>>c>>s;
    int mx=INT_MIN,cnt=0;
    s+=s;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='g')
        {
            cnt=i;
        }
        if(s[i]==c)
        {
            mx=max(mx,cnt-i);
        }
        debug(mx)
    }
    cout<<mx<<nl;
 }

 
}