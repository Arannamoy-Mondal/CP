#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e7;
int parent[N],group_size[N];
void dsu_initialize(int n){
    for(int i=0;i<n;i++){
        parent[i]=-1;
        group_size[i]=1;
    }
    
}
int find(int node){
    if(parent[node]==-1)return node;

    else return parent[node]=find(parent[node]); /*Path compression optimization*/

    /*
    time complexity
    worst O(n)
    best O(1)
    */
}
void dsu_union(int x,int y){
    int headX=find(x),headY=find(y);
    if(group_size[headX]>group_size[headY]){
        parent[headY]=headX;
        group_size[headX]+=group_size[headY];
    }
    else
    {
        parent[headX]=headY;
        group_size[headY]+=group_size[headX];
    }
}
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    dsu_initialize(10);
    dsu_union(1,2);
    cout<<find(1);
    dsu_union(2,3);
    cout<<find(3);
    dsu_union(4,5);
    cout<<find(5);
    dsu_union(5,6);
    cout<<find(6);
    dsu_union(3,4);
    cout<<find(4);
    
}

  