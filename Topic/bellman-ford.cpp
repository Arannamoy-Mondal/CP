#include<bits/stdc++.h>
#define int long long
using namespace std;
class Edge{
    public:
    int a,b,c;
    Edge(int a,int b,int c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
};
int32_t main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    #endif
    int n,e;
    cin>>n>>e;
    int dis[n+1];
    vector<Edge>v;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        v.push_back({a,b,c});
    }
    for(int i=0;i<n+1;i++)dis[i]=1e7;
    dis[0]=0;
    for(int i=1;i<=n-1;i++){
        for(auto it:v){
            int a=it.a,b=it.b,c=it.c;
            if(dis[a]<1e7 && dis[a]+c <dis[b]){
                dis[b]=dis[a]+c;
            }
        }
    }
    for(int i=1;i<n-1;i++)cout<<dis[i]<<" ";
}