// #include<bits/stdc++.h>
// #include <stdio.h>
// #define int long long
// #define nl "\n"
// #define blk " "
// #ifndef ONLINE_JUDGE
// #define debug(a) cout<<#a<<blk<<a<<nl;
// #define sep cout<<"---------------"<<endl;
// #else
// #define debug(a)
// #endif
// const int N=1e5+5;
// using namespace std;
// int32_t main()
// {
//   ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt","r",stdin);
//   freopen("output.txt","a",stdout);
//   cout<<"*******************"<<nl;
//   #endif
//   int ts;
//   cin>>ts;
//   while(ts--)
//   {
//     int n;
//     cin>>n;
//     vector<string>v1(n),v2(n),v3(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>v1[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>v2[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         cin>>v3[i];
//     }
//     int cnt1=0,cnt2=0,cnt3=0;
//     for(auto it:v1)
//     {
//         if(find(v2.begin(),v2.end(),it)!=v2.end() && 
//         find(v3.begin(),v3.end(),it)!=v3.end())
//         {
//             cnt1+=0;
            
//         }
//         else if(find(v2.begin(),v2.end(),it)==v2.end() && 
//         find(v3.begin(),v3.end(),it)!=v3.end())
//         {
//             cnt1+=1;
//         }
//         else if(
//             find(v2.begin(),v2.end(),it)!=v2.end() && 
//         find(v3.begin(),v3.end(),it)==v3.end()
//         )
//         {
//             cnt1+=1;
//         }
//         else if(
//             find(v2.begin(),v2.end(),it)==v2.end() && 
//         find(v3.begin(),v3.end(),it)==v3.end()
//         )
//         {
//             cnt1+=3;
//         }
//     }
//     for(auto it:v2)
//     {
//         if(find(v1.begin(),v1.end(),it)!=v1.end() && 
//         find(v3.begin(),v3.end(),it)!=v3.end())
//         {
//             cnt2+=0;
            
//         }
//         else if(find(v1.begin(),v1.end(),it)==v1.end() && 
//         find(v3.begin(),v3.end(),it)!=v3.end())
//         {
//             cnt2+=1;
//         }
//         else if(
//             find(v1.begin(),v1.end(),it)!=v1.end() && 
//         find(v3.begin(),v3.end(),it)==v3.end()
//         )
//         {
//             cnt2+=1;
//         }
//         else if(
//             find(v1.begin(),v1.end(),it)==v1.end() && 
//         find(v3.begin(),v3.end(),it)==v3.end()
//         )
//         {
//             cnt2+=3;
//         }
//     }
//     for(auto it:v3)
//     {
//         if(find(v2.begin(),v2.end(),it)!=v2.end() && 
//         find(v1.begin(),v1.end(),it)!=v1.end())
//         {
//             cnt3+=0;
            
//         }
//         else if(find(v2.begin(),v2.end(),it)==v2.end() && 
//         find(v1.begin(),v1.end(),it)!=v1.end())
//         {
//             cnt3+=1;
//         }
//         else if(
//             find(v2.begin(),v2.end(),it)!=v2.end() && 
//         find(v1.begin(),v1.end(),it)==v1.end()
//         )
//         {
//             cnt3+=1;
//         }
//         else if(
//             find(v2.begin(),v2.end(),it)==v2.end() && 
//         find(v1.begin(),v1.end(),it)==v1.end()
//         )
//         {
//             cnt3+=3;
//         }
//     }
//     cout<<cnt1<<blk<<cnt2<<blk<<cnt3<<nl;
//   }
// }
#include<bits/stdc++.h>
#include <stdio.h>
#define int long long
#define nl "\n"
#define blk " "
#ifndef ONLINE_JUDGE
#define debug(a) cout<<#a<<blk<<a<<nl;
#define sep cout<<"---------------"<<endl;
#else
#define debug(a)
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt","r",stdin);
  freopen("output.txt","a",stdout);
  cout<<"*******************"<<nl;
  #endif
 int ts;
 cin>>ts;
 while(ts--)
 {
    int n;
    cin>>n;
    vector<string>v1(n),v2(n),v3(n);
    map<string,int>mp;
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
        mp[v1[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v2[i];
        mp[v2[i]]++;
    }
    for(int i=0;i<n;i++)
    {
        cin>>v3[i];
        mp[v3[i]]++;
    }
    int cnt1=0,cnt2=0,cnt3=0;
    for(auto it:v1)
    {
        if(mp[it]==1)
        {
            cnt1+=3;
        }
        else if(mp[it]==2)
        {
            cnt1+=1;
        }
    }
    for(auto it:v2)
    {
        if(mp[it]==1)
        {
            cnt2+=3;
        }
        else if(mp[it]==2)
        {
            cnt2+=1;
        }
    }
    for(auto it:v3)
    {
        if(mp[it]==1)
        {
            cnt3+=3;
        }
        else if(mp[it]==2)
        {
            cnt3+=1;
        }
    }
    cout<<cnt1<<blk<<cnt2<<blk<<cnt3<<nl;
 }

 
}