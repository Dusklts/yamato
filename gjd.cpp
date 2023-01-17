#include<iostream>
#include<cstdio>
#include<cstring>
#include<windows.h>
#include<bits/stdc++.h>
#include<algorithm>
  char s1[5005],s2[5005];
    int a[5005],b[5005],c[5005];
using namespace std;
int main()
{
    int la,lb,lc;
    scanf("%s",s1);
    scanf("%s",s2);
    la=strlen(s1);
    lb=strlen(s2);
    for(int i=0;i<la;i++)
    {
        a[la-i]=s1[i]-'0';
    }
    for(int i=0;i<lb;i++)
    {
        b[lb-i]=s2[i]-'0';
    }
    lc=max(la,lb)+1;
    for(int i=0;i<=lc;i++)
{
    c[i]+=a[i]+b[i];
    c[i+1]=c[i]/10;
    c[i]=c[i]%10;
}
    if(c[lc]==0&&lc>0)lc--;
    for(int i=lc;i>0;i--)
    cout<<c[i];
    Sleep(10000);
    return 0;
}
