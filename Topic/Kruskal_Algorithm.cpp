#include<bits/stdc++.h>
#define nl "\n"
#define blk " "
#define int long long int
using namespace std;
const int N=1e7;
int parent[N],level[N];
class Edge{
    public:
    int a,b,c;
    Edge(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};

int find_parent(int x){
    if(parent[x]==-1)return x;
    else return parent[x]=find_parent(parent[x]);
}
void dsu_union(int x,int y){
    int headX=find_parent(x),headY=find_parent(y);
    if(level[headX]>level[headY])parent[headY]=headX;
    else if(level[headX]<level[headY])parent[headX]=headY;
    else{
        parent[headX]=headY;
        level[headY]++;
    }
}
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n,e;
    cin>>n>>e;
    Edge* edgeList[n];
    for(int i=0;i<e;i++){
        int a,b,c;
        cin>>a>>b>>c;
        edgeList[i]=new Edge(a,b,c);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(edgeList[i]->c>edgeList[j]->c){
                swap(edgeList[i],edgeList[j]);
            }
        }
        parent[i]=-1;
        level[i]=0;
    }
    bool cycle=false;
    int total_cost=0;
    for(int i=0;i<n;i++){
        cout<<edgeList[i]->a<<" "<<edgeList[i]->b<<" "<<edgeList[i]->c<<nl;
        int x=edgeList[i]->a,y=edgeList[i]->b,w=edgeList[i]->c;
        int headX=find_parent(x),headY=find_parent(y);
        if(headX==headY){
            cycle=true;
            continue;
        }
        else{
            dsu_union(x,y);
            total_cost+=w;
        }
    }
    if(cycle)cout<<"Cycle detected";
    else cout<<"No cycle detected";
    cout<<total_cost;
}
/*

5 7
0 1 2
0 2 3
0 3 3
3 4 6
2 4 4
2 1 7
1 4 5

*/