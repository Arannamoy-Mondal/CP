/*https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C*/
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
 int a[n],b[m];
 for(int i=0;i<n;i++)cin>>a[i];
 for(int i=0;i<m;i++)cin>>b[i];
 int i=0,j=0,cnt=0;
 while (i<n && j<m) 
 {
    int cnta=0,cntb=0,curr=a[i];
    while (a[i] == curr && i<n) 
    {
        cnta++;
        i++;
    }
    while (curr > b[j] && j<m) 
    {
        j++;
    }
    while(b[j] == curr && j<m) 
    {
        cntb++;
        j++;
    }
    cnt += (cnta*cntb);
    debug(cnt)
    }
    cout<<cnt;

 
}