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
#define sep cout<<"---------------"<<endl;
#endif
const int N=1e5+5;
using namespace std;
int32_t main()
{
 ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
 int ts;
 cin>>ts;
 while(ts--)
 {
    char a[11][11];
    for(int i=1;i<11;i++)
    {
        for(int j=1;j<11;j++)
        {
            cin>>a[i][j];
        }
    }
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0,cnt=0;
    //row 1 1
    for(int i=1;i<=10;i++)
    {
        if(a[1][i]=='X')
        {
            cnt+=1;
            cnt1+=1;
        }
    }
    //row 2 2
    for(int i=2;i<=9;i++)
    {
        if(a[2][i]=='X')
        {
            cnt+=2;
            cnt2+=2;
            debug("Problem1")
        }
    }
    //row 3 3
    for(int i=3;i<=8;i++)
    {
        if(a[3][i]=='X')
        {
            cnt+=3;
            cnt3+=3;
        }
    }
    //row 4 4
    for(int i=4;i<=7;i++)
    {
        if(a[4][i]=='X')
        {
            cnt+=4;
            cnt4+=4;
        }
    }
    //row 5 5
    for(int i=5;i<=6;i++)
    {
        if(a[5][i]=='X')
        {
            cnt+=5;
            cnt5+=5;
        }
    }
    //row 6 5
    for(int i=5;i<=6;i++)
    {
        if(a[6][i]=='X')
        {
            cnt+=5;
            cnt5+=5;
        }
    }
    //row 7 4
    for(int i=4;i<=7;i++)
    {
        if(a[7][i]=='X')
        {
            cnt+=4;
            cnt4+=4;
        }
    }
    //row 8 3
    for(int i=3;i<=8;i++)
    {
        if(a[8][i]=='X')
        {
            cnt+=3;
            cnt3+=3;
        }
    }
    //row 9 2
    for(int i=2;i<=9;i++)
    {
        if(a[9][i]=='X')
        {
            cnt+=2;
            cnt2+=2;
            debug("Problem2")
        }
    }
    //row 10 1
    for(int i=1;i<=10;i++)
    {
        if(a[10][i]=='X')
        {
            cnt+=1;
            cnt1+=1;
        }
    }
    //column 1 1
    for(int i=2;i<=9;i++)
    {
        if(a[i][1]=='X')
        {
            cnt+=1;
            cnt1+=1;
        }
    }
    //column 2 2
    for(int i=3;i<=8;i++)
    {
        if(a[i][2]=='X')
        {
            cnt+=2;
            cnt2+=2;
            debug("Problem3")
        }
    }
    //column 3 3
    for(int i=4;i<=7;i++)
    {
        if(a[i][3]=='X')
        {
            cnt+=3;
            cnt3+=3;
        }
    }
    //column 4 4
    for(int i=5;i<=6;i++)
    {
        if(a[i][4]=='X')
        {
            cnt+=4;
            cnt4+=4;
        }
    }
    //column 5 5
    //column 6 5
    //column 7 4
    for(int i=5;i<=6;i++)
    {
        if(a[i][7]=='X')
        {
            cnt+=4;
            cnt4+=4;
        }
    }
    //column 8 3
    for(int i=4;i<=7;i++)
    {
        if(a[i][8]=='X')
        {
            cnt+=3;
            cnt3+=3;
        }
    }
    //column 9 2
    for(int i=3;i<=8;i++)
    {
        if(a[i][9]=='X')
        {
            cnt+=2;
            cnt2+=2;
            debug("Problem4")
        }
    }
    //column 10 1
    for(int i=2;i<=9;i++)
    {
        if(a[i][10]=='X')
        {
            cnt+=1;
            cnt1+=1;
        }
    }
    debug(cnt1)
    debug(cnt2)
    debug(cnt3)
    debug(cnt4)
    debug(cnt5)
    cout<<cnt<<nl;
 }
}