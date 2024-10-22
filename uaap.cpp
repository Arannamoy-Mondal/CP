#include<bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
#define int long long
#define nl "\n"
#define blk " "
#define rep(i,in,n) for(int i=in;i<n;i++)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e7+5;
//using namespace __gnu_pbds;
using namespace std;
//template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
 cin>>ts;
 cin.ignore();
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
 char f;
 cin>>n>>q>>f;
 string s;
 char ch[26]={0};
 cin>>s;
 int pre[n],i=0,cnt=0,dif[n];
 rep(i,0,n)pre[i]=0,dif[i]=0;
 for(auto it:s)
 {
    if(it==f)cnt++;
    pre[i]=cnt;
    if(i==0)dif[i]=pre[i];
    else dif[i]=pre[i]-pre[i-1];
    i++;
 }
 map<int,int>mp;
 while(q--)
 {
    int op;
    cin>>op;
    if(op==0)
    {
        int l,r;
        cin>>l>>r;
        l-=1;
        r-=1;
        if(l==0)cout<<pre[r]+mp[r]<<nl;
        else cout<<pre[r]-pre[l]+mp[r-l]<<nl;
    }
    else if(op=1)
    {
        int i;
        char c;
        cin>>i>>c;
        i-=1;
        if(s[i]==f && c!=f)dif[i]--,mp[i]--;
        if(s[i]!=f && c==f)dif[i]++,mp[i]++;
        cout<<mp[i]<<nl;
    }
    sep(*)
 }
}
/*
3
3
4
2
*/

