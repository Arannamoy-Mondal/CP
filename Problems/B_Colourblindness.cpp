/*https://codeforces.com/contest/1722/problem/B*/
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
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    ffor(i,0,n)
    {
        if(s1[i]=='G')
        {
            s1[i]='B';
        }
    }
    ffor(i,0,n)
    {
        if(s2[i]=='G')
        {
            s2[i]='B';
        }
    }
    if(s1==s2)cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
 }
}