#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>&v,int l,int r){
    int pivot=v[r];
    int i=l-1;
    for(int j=l;j<=r-1;j++){
        if(v[j]<pivot){
            i++;
            swap(v[i],v[j]);
        }
    }
    swap(v[i+1],v[r]);
    return i+1;
}
void quickSort(vector<int>&v,int l,int r){
    if(l<r){
        int m=partition(v,l,r);
        quickSort(v,l,m-1);
        quickSort(v,m+1,r);
    }
}
int main(){
    freopen("input.txt","r",stdin);
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v)cin>>it;
    quickSort(v,0,n-1);
    for(auto it:v)cout<<it<<" ";
    cout<<"\n";
}