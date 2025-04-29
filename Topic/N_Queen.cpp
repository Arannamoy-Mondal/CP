#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e4;
char a[N][N];
int totalSolution=0;
bool check(int x,int y,int n){
    for(int i=0;i<n;i++){
        if(a[x][i]=='Q' || a[i][y]=='Q')return false;
    }
    for(int i=x,j=y;i>=0 && j>=0;i--,j--){
        if(a[i][j]=='Q')return false;
    }
    for(int i=x,j=y;i>=0 && j<n;i--,j++){
        if(a[i][j]=='Q')return false;
    }
    return true;
}

void queen(int r,int n){
    if(r==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]=='Q')cout<<i+1;
                else cout<<'#';
            }
            cout<<nl;
        }
        cout<<nl<<nl<<nl;
        totalSolution++;
        return;
    }
    else{
        for(int i=0;i<n;i++){
            if(check(r,i,n)){
                a[r][i]='Q';
                queen(r+1,n);
                a[r][i]='#';
            }
        }
    }

}

int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]='#';
        }
    }
    queen(0,n);
    cout<<"Total solution: "<<totalSolution;
}

/*
https://leetcode.com/problems/n-queens/description/
https://leetcode.com/problems/n-queens-ii/
*/
