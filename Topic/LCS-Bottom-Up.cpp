#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int dp[N][N];
int main(){
    string a,b;
    cin>>a>>b;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<=a.size();i++){
        for(int j=0;j<=b.size();j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++){
            if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
            }
        }
    }
    cout<<dp[a.size()][b.size()];
}