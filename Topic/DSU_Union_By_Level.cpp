#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e7;
int parent[N],level[N];
void dsu_initialize(int n){
    for(int i=0;i<n;i++){
        parent[i]=-1;
        level[i]=0;
    }
}
int find_parent(int x){
    if(parent[x]==-1)return x;
    else return parent[x]=find_parent(parent[x]);
}
void dsu_union(int x,int y){
    int headX=find_parent(x),headY=find_parent(y);
    if(level[headX]>level[headY]){
        parent[headY]=headX;
    }
    else if(level[headX]<level[headY]){
        parent[headX]=headY;
    }
    else{
        parent[headY]=headX;
        level[headX]++;
    }
}
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    dsu_initialize(10);
    dsu_union(1,2);
    cout<<find_parent(2);
    dsu_union(2,3);
    cout<<find_parent(3);
    dsu_union(3,4);
    cout<<find_parent(4);
    dsu_union(5,6);
    cout<<find_parent(6);
    dsu_union(6,7);
    dsu_union(4,5);
    cout<<find_parent(7);
}