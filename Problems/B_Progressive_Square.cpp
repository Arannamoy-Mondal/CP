#include<bits/stdc++.h>
#define int long long
#define nl "\n"
#define blk " "
#define ffor(i,in,n) for(int i=in;i<n;i++)
#define rfor(i,in,n) for(int i=n-1;i>=in;i--)
#define pb push_back
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep(a) cout<<#a<<#a<<#a<<#a<<#a<<#a<<#a<<endl;
#else
#define debug(a)
#define sep(a)
#endif
const int N=1e5+5;
using namespace std;
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
 int ts=1;
 cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
        int n,c,d;
        cin>>n>>c>>d;
        int a[(n*n)+1],b[(n*n)+1],e[n+1],tmp;
        //for(int i=0; i<=(n*n); i++)
        ffor(i,1,(n*n)+1)
        {
            cin >> a[i];
            e[i]=0;
        }
        sort(a+1,a+(n*n)+1);
        tmp=a[1];
        int flag=1;
        //for(int i=0; i<n; i++)
        ffor(i,1,n+1)
        {
            e[i]=(tmp+(i*d));
        }
        for(int i=1; i<n+1; i++)
        {
            for(int j=1; j<n+1; j++)
            {
                b[i*n+(j)]=(e[i]+(c*j));
            }
        }
        sort(b+1,b+(n*n)+1);
        for(int i=1;i<(n*n)+1;i++)
        {
            if(a[i]!=b[i])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

}