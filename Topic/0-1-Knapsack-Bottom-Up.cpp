#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>w{2,3,4,5},v{1,3,5,3};
    int n=4,W=8;
    vector<vector<int>>dp(n+1,vector<int>(W+1));
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++){
            if(i==0 || j==0)dp[i][j]=0;
            else if(w[i-1]<=j)dp[i][j]=max(dp[i-1][j-w[i-1]]+v[i-1],dp[i-1][j]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][W]<<"\n";
    cout<<dp[n][W];
    vector<int>ans;
    int t=W;
    for(int i=n;i>0;i--){
        if(dp[i][t]!=dp[i-1][t]){
            ans.push_back(i-1);
            t-=w[i-1];
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<"Weight Value"<<"\n";
    for(auto &it:ans)cout<<w[it]<<"\t"<<v[it]<<"\n";
    for(int i=0;i<=n;i++){
        cout<<w[i]<<" ";
        for(int j=0;j<=W;j++){
            cout<<i<<j<<"="<<dp[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}


/*https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U?mobile=true*/
