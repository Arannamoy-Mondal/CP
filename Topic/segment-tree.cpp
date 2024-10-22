#include<bits/stdc++.h>
const int N=1e7+5;
using namespace std;
int a[N],t[4*N];
void build(int node,int b,int e){
    if(b==e){
        t[node]=a[b];
        return;
    }
    int mid=(b+e)/2,l=node*2,r=l+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[node]=t[l]+t[r];
}
int query(int node,int b,int e,int i,int j){
    if(b>j || e<i)return 0;//***********
    if(b>=i && e<=j)return t[node];//***********
    int mid=(b+e)/2,l=node*2,r=l+1;
    return query(l,b,mid,i,j)+query(r,mid+1,e,i,j);
}
void update(int node,int b,int e,int i,int x){
    if(b>i || e<i)return;
    if(b==e && b==i){
        t[node]=x;
        return;
    }
    int mid=(b+e)/2,l=node*2,r=l+1;
    update(l,b,mid,i,x);
    update(r,mid+1,e,i,x);
    t[node]=t[l]+t[r];
}
int main(){
    for(int i=1;i<=10;i++)a[i]=i;
    build(1,1,10);
    cout<<t[1]<<endl;
    cout<<query(1,1,10,2,6)<<endl;
    update(1,1,10,1,10);
    cout<<query(1,1,10,1,2)<<endl;
}