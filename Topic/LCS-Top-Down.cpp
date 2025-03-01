#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int dp[N][N];
int lcsCount(string a,int m,string b,int n){
    if(m==0 || n==0)return 0;
    else if(dp[m][n]!=-1)return dp[m][n];
    else if(a[m-1]==b[n-1]){
        return dp[n][m]=1+lcsCount(a,m-1,b,n-1);
    }
    else{
        return dp[n][m]=max(lcsCount(a,m-1,b,n),lcsCount(a,m,b,n-1));
    }
}
int main(){
    string a,b;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    cout<<lcsCount(a,a.size(),b,b.size());
}