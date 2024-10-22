#include<bits/stdc++.h>
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
 //cin>>ts;
 while(ts--)
 {
    solve();
 }
}
void solve()
{
  float n1,n2,n3,n4;
  cin>>n1>>n2>>n3>>n4;
  n4=(n1*2 + n2*3 + n3*4 +n4);
  n4/=10;
  if(n4>= 5.0 && n4<=6.9)
  {
    float n5;
    cin>>n5;
    cout<<"Media: "<<fixed<<setprecision(1)<<n4<<nl;
    n4=(n4+n5)/2;
    cout<<"Aluno em exame."<<nl<<"Nota do exame: "<<n5<<nl
    <<"Aluno aprovado."<<nl
    <<"Media final: "<<n4<<nl;
  }
  else if(n4>=7.0)cout<<"Media: "<<fixed<<setprecision(1)<<n4<<nl<<"Aluno aprovado."<<nl;
  else cout<<"Media: "<<fixed<<setprecision(1)<<n4<<nl<<"Aluno reprovado."<<nl;

}