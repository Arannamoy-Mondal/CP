#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int ternarySearch(vector<int>v,int l,int r,int key){
    if(l<r){
        
        int m1=l+(r-l)/3,
        m2=r-(r-l)/3;
        if(v[m1]==key)return m1;
        else if(v[m2]==key)return m2;
        else if(v[m1]>key)return ternarySearch(v,l,m1-1,key);
        else if(v[m2]<key)return ternarySearch(v,m2+1,r,key);
        else {
           return ternarySearch(v,m1+1,m2-1,key);
        }
    }
    else return -1;
}
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    sort(v.begin(),v.end());
    for(auto it:v)cout<<it<<nl;
    cout<<ternarySearch(v,0,n-1,1000)<<nl;
}