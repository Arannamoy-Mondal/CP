#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e7;
int parent[N],level[N];
int find_parent(int x){
    if(parent[x]==-1)return x;
    else return parent[x]=find_parent(parent[x]);
}
void dsu_union(int x,int y){
    int headX=find_parent(x),headY=find_parent(y);
    if(level[headX]>level[headY]){
        parent[headY]=headX;
    }
    else if(level[headY]>level[headX]){
        parent[headX]=headY;
    }
    else{
        parent[headX]=headY;
        level[headY]++;
    }
}
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int e;
    cin>>e;
    for(int i=0;i<100;i++){
        parent[i]=-1;
        level[i]=0;
    }
    bool cycle=false;
    for(int i=0;i<e;i++){
        int a,b;
        cin>>a>>b;
        if(find_parent(a)==find_parent(b)){
            cycle=true;
        }
        else dsu_union(a,b);
    }
    if(cycle)cout<<"Cycle detected";
    else cout<<"Cycle not detected";
}

