#include<iostream>
#include<cstdio>
#include<cstring>
#include<windows.h>
#include<bits/stdc++.h>
#include<algorithm>
 int la,lb,lc;
  char s1[5005],s2[5005];
    int a[5005],b[5005],c[5005];
using namespace std;
int main()
{    scanf("%s",s1);
    la=strlen(s1);
    for(int i=0;i<la;i++)
    {
        a[la-i]=s1[i]-'0';
    }
    for(int i=1;i<=la;i++)
{   
    for(int i=1;i<la;i++)
    {
            c[i]=a[i]*a[i];
            c[i+1]=c[i]/10;
            c[i]=c[i]%10;

    }
}
    if(c[lc]==0&&lc>0)lc--;
    for(int i=lc;i>0;i--)
    cout<<c[i];
    Sleep(10000);
    return 0;
}
void ggdcf(int a[])
{
    for(int i=0;i<la;i++)
    {
        for(int j=0;j<la;j++)
        {
            c[i+j]=a[i]*b[j];
            c[i+j+1]=c[i+j]/10;
            c[i+j]=c[i+j]%10;
        }
    }
}
void cheng(int a[])
{
    int jw=0;
    for(int i=0;i<la;i++)
    {
        
    }
}