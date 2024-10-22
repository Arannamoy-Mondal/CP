#include<bits/stdc++.h>
using namespace std;
vector<bool>vis(100);
vector<int> v[100];;
int color[100]={0};
bool ok=1;
void bfs(int src){
    if(!vis[src])vis[src]=1;
    for(auto it:v[src]){
        if(!vis[it]){
            color[it]=color[src]^1;
        }
        if(color[it]==color[src])ok=0;
    }
}
int main(){
    int n=5,e=5;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    for(int i=1;i<=n;i++){
        if(!vis[i]){
            bfs(i);
        }
    }
    if(ok)cout<<"YES";
    else cout<<"NO";
}