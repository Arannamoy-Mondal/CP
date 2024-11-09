#include<bits/stdc++.h>
#define int long long
using namespace std;

int binpow(int x,int y,int m){
    int res=1;
    x%=m;
    while(y>0){
        if(y&1)res=res*x%m;
        x=x*x%m;
        y>>=1;
    }
    return res;
}

int32_t main(){
    int x,y,m;
    while(cin>>x>>y>>m)
    {
        cout<<binpow(x,y,m)<<endl;
    }
}


// UVA 374, UVA 1230
