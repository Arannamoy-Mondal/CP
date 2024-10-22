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
const int N=1e7+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
class node{
    public:
    int mn,cnt;
};
int a[N];
node t[N*4];
node merge(node x,node y){
    node ans;
    ans.mn=min(x.mn,y.mn);
    ans.cnt=0;
    if(ans.mn==x.mn)ans.cnt+=x.cnt;
    if(ans.mn==y.mn)ans.cnt+=y.cnt;
    return ans;
}
void build(int n,int b,int e){
    if(b==e){
        t[n]={a[b],1};
        return;
    }
    int mid=(b+e)/2,l=n*2,r=l+1;
    build(l,b,mid);
    build(r,mid+1,e);
    t[n]=merge(t[l],t[r]);
}
node query(int n,int b,int e,int i,int j){
    if(b>j || e<i)return {INT_MAX,1};
    if(b>=i && e<=j){
        return t[n];
    }
    int mid=(b+e)/2,l=n*2,r=l+1;
    return merge(query(l,b,mid,i,j),query(r,mid+1,e,i,j));
}
void update(int n,int b,int e,int i,int x){
    if(b>i || e<i)return;
    if(b==e){
        t[n]={x,1};
        return;
    }
    int mid=(b+e)/2,l=n*2,r=l+1;
    update(l,b,mid,i,x);
    update(r,mid+1,e,i,x);
    t[n]=merge(t[l],t[r]);
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
        update(1,1,n,i,x);
    }
    if(op==2){
        int l,r;
        cin>>l>>r;
        l++;
        node ans=query(1,1,n,l,r);
        cout<<ans.mn<<blk<<ans.cnt<<nl;
    }
 }
}
/*
3 2
2 1
2 3
*/