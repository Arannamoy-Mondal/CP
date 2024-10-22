#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int sum=0;
        while(n--){
            int x;
            cin>>x;
            while(x){
                sum+=(x%10);
                x/=10;
            }
        }
        if(sum%3 ==0)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}