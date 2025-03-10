#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int dp[N][N];
int main(){
    string a="abd",b="gbad";
    // cin>>a>>b;
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
    cout<<dp[a.size()][b.size()]<<"\n";
    string ans="";
    int i=a.size(),j=b.size();
    while(i!=0 && j!=0){
        if(a[i-1]==b[j-1]){
            ans+=a[i-1];
            i--;
            j--;
        }
        else{
            if(dp[i-1][j]>dp[i][j-1])i--;
            else j--;
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<"\n";
    for(int i=1;i<=a.size();i++){
        for(int j=1;j<=b.size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
}
