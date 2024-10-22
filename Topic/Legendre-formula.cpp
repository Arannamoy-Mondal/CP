//this formula used to calculate the maximum power of a prime number in a factorial
#include<bits/stdc++.h>
using namespace std;;
int legendre(int n,int p){
    int ans=0;
    while(n){
        ans+=(n/p);
        n/=p;
    }
    return ans;
}
int main(){
    cout<<legendre(5,5);
}
