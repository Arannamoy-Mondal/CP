#include<bits/stdc++.h>
using namespace std;
const int N=1e4;
int dp[N][N];
vector<int>w{2,3,4,5},v{1,3,5,3};
int knapsack(int n,int W){
    if(n==0 || W==0)return 0;
    else if(dp[n][W]!=-1)return dp[n][W];
    else if(w[n-1]<=W){
        return dp[n][W]=max(knapsack(n-1,W-w[n-1])+v[n-1],knapsack(n-1,W));
    }
    else return dp[n][W]=knapsack(n-1,W);
}
int main(){
    int n=4;
    int W=8;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=W;j++)dp[i][j]=-1;
    }
    cout<<knapsack(n,W);
}


/*
Code for recursion visualizer:
def fn(n,W):
  if (n==0 or W==0): return 0
  if(w[n-1]<=W):
        return max(fn(n-1,W-w[n-1])+v[n-1],fn(n-1,W))
  else:
      return fn(n-1,W)

      4
      2 3 4 5
      1 3 5 3
      8
*/