#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&v,int l,int mid,int r){
    int leftSize=mid-l+1,rightSize=r-mid;
    vector<int>L(leftSize),R(rightSize);
    int cur=0;
    for(int i=l;i<=mid;i++,cur++){L[cur]=v[i];}
    cur=0;
    for(int i=mid+1;i<=r;i++,cur++){R[cur]=v[i];}
    cur=l;
    int i=0,j=0;
    while(i<leftSize && j<rightSize){
        if(L[i]<=R[j]){
            v[cur]=L[i];
            i++;
        }
        else{
            v[cur]=R[j];
            j++;
        }
        cur++;
    }
    while(i<leftSize){
        v[cur]=L[i];
        i++;
        cur++;
    }
    while(j<rightSize){
        v[cur]=R[j];
        j++;
        cur++;
    }
}
void mergeSort(vector<int>&v,int l,int r){
    if(l<r){
        mergeSort(v,l,(l+r)/2); // parameter (array,first index, mid index)
        mergeSort(v,((l+r)/2)+1,r); // parameter (array,mid index + 1, last index)
        merge(v,l,(l+r)/2,r); // parameter (array,first index, mid ,last index)
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    mergeSort(v,0,n-1); // parameter (array,first index, last index)
    for(auto it:v)cout<<it<<" ";
    cout<<"\n";
}
