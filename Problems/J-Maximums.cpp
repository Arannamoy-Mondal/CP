#include<bits/stdc++.h>
#define int unsigned long long
#define nl "\n"
#define blk " "
using namespace std;
int32_t main(){
    #ifndef ONLINE_JUDGE
     freopen("input.txt","r",stdin);
     //freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1;i<=n;i++)cin>>a[i];
    int x=0;
    for(int i=1;i<=n;i++){
        a[i]+=x;
        x=max(a[i],x);
        cout<<a[i]<<blk;
    }
}
/*
0 1 2 0 3   
*/