#include<bits/stdc++.h>
using namespace std;
int a[11],t[40];
void solve(int node,int b,int e)
{
    if(b==e)
    {
        t[node]=a[b]; 
        return; 
    }
    int mid=(b+e)/2,l=node*2;
    int r=l+1;
    solve(l,b,mid);
    solve(r,mid+1,e);
    t[node]=t[l]+t[r];
    return;
}
int query(int node,int b,int e,int i,int j)
{
    if(b>j or e<i)return 0;
    if(b>=i && e<=j)return t[node];
    int l=node*2,r=node*2 +1,mid=(b+e)/2;
    return query(l,b,mid,i,j)+query(r,mid+1,e,i,j);
}
void upd(int node,int b,int e,int i,int x)
{
    if(b>i or e<i)return;
    if(b==e && b==i)
    {
        t[node]=x;
        return;
    }
    int mid=(b+e)/2,l=node*2,r=l+1;
    upd(l,b,mid,i,x);
    upd(r,mid+1,e,i,x);
    t[node]=t[l]+t[r];
}
int main()
{
    for(int i=1;i<=10;i++)a[i]=i;
    //a=[1,2,3,4,5,6,7,8,9,10]
    solve(1,1,10);
    cout<<t[1]<<endl;
    cout<<query(1,1,10,2,5)<<endl;
    upd(1,1,10,2,10);
    //a=[1,10,3,4,5,6,7,8,9,10]
    cout<<query(1,1,10,2,5)<<endl;
}