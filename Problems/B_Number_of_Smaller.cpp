/*https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/B*/
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
 int n,m;
 cin>>n>>m;
 vector<int>a(n),b(m);
 for(int i=0;i<n;i++)cin>>a[i];
 for(int i=0;i<m;i++)cin>>b[i];
 int i=0,j=0,cnt=0;
 while(j<m)
 {
    while(a[i]<b[j])
    {
        cnt++;
        i++;
    }
    cout<<cnt<<blk;
    j++;
 }
}