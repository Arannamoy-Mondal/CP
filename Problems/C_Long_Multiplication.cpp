#include <bits/stdc++.h>
using namespace std;
long long int arr[6000000],brr[6000000];
int  main() {
    long long int  ttt;
    cin >> ttt;
    long long int  n,m,i,j,cnt;
    while (ttt--) {
        cnt=-1;
        string a,b,sa,sb;
        cin>>a>>b;
        for(i=0;i<a.length();i++){
            if(a[i]!=b[i]){
                sa.push_back(a[i]);
                sb.push_back(b[i]);
                cnt=i;
                break;
            }
            else{
                sa.push_back(a[i]);
                sb.push_back(b[i]);
            }
        }
        if(cnt==-1){
            cout<<a<<"\n";
            cout<<b<<"\n";
        }
        else{
            for(i=cnt+1;i<a.length();i++){
                if(a[cnt]<b[cnt]){
                    sa.push_back(max(a[i],b[i]));
                    sb.push_back(min(a[i],b[i]));
                }
                else{
                    sb.push_back(max(a[i],b[i]));
                    sa.push_back(min(a[i],b[i]));
                }
                
            }
            cout<<sa<<"\n";
            cout<<sb<<"\n";
}
}
}
