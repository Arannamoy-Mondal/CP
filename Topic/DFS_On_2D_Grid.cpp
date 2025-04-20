#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
const int N=1e4;
using namespace std;
int vis[N][N];
vector<vector<int>>v(N,vector<int>(N));
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
int m,n;
bool valid(int x,int y){
    if(x>=0 && y>=0 && x<m && y<n)return true;
    else return false;
}

void dfs(int si,int sj){
    vis[si][sj]=1;
    cout<<si<<blk<<sj<<nl;
    for(auto it:d){
        int ci=si+it.first,cj=sj+it.second;
        if(valid(ci,cj) && !vis[ci][cj]){
            dfs(ci,cj);
        }
    }
}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    dfs(0,0);

}

/*
3 3
1 1 1
1 1 1
1 1 1
*/