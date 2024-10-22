#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s1[101],s2[101];
    scanf("%s %s",s1,s2);
    for(int i=0,x;i<strlen(s1);i++)s1[i]=tolower(s1[i]);
    for(int i=0,x;i<strlen(s2);i++)s2[i]=tolower(s2[i]);
    if(strcmp(s1,s2)==0)printf("0");
    else if(strcmp(s1,s2)<0)printf("-1");
    else printf("1");
}