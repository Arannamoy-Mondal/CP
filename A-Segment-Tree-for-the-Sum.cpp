#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cerr<<#a<<blk<<a<<nl;
#define sep(a) cerr<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e5+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
int a[N],t[N*4];
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
void update(int node,int b,int e,int i,int x){
    if(b>i || e<i)return;
    if(b==e){
        t[node]=x;
        return;
    }
    int mid=(b+e)/2,l=node*2,r=l+1;
    update(l,b,mid,i,x);
    update(r,mid+1,e,i,x);
    t[node]=t[l]+t[r];
}
int query(int node,int b,int e,int i,int j){
    if(b>j || e<i)return 0;
    if(b>=i && e<=j)return t[node];
    int mid=(b+e)/2,l=node*2,r=l+1;
    return query(l,b,mid,i,j)+query(r,mid+1,e,i,j);
}
int power(int x,int y)
{
    int res=1;
    while(y)
    {
        if(y&1)
        {
            res*=x;
            //res%=N;
        }
        x*=x;
        //x%=N,
        y>>=1;
    }
    return res;
}
void solve();
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
auto cl=clock();
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
#endif
 int ts=1;
 //cin>>ts;
 rep(t,1,ts+1)
 {
    //debug(t)
    solve();
 }
cerr<<nl<<1.00*(clock()-cl)/CLOCKS_PER_SEC;
}
void solve()
{
 int n,q;
 cin>>n>>q;
 rep(i,1,n+1)cin>>a[i];
 build(1,1,n);
 while(q--){
    int op;
    cin>>op;
    if(op==1){
        int i,x;
        cin>>i>>x;
        i++;
        debug(i)
        update(1,1,n,i,x);
    }
    if(op==2){
        int l,r;
        cin>>l>>r;
        l++;
        debug(l)
        debug(r)
        cout<<query(1,1,n,l,r)<<nl;
    }
 }
}
/*
11
8
14
*/