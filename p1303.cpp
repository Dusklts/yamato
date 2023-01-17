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
    int l,r;
    scanf("%s",s1);
    scanf("%s",s2);
    l=strlen(s1);
    r=strlen(s2);
    for(int i=0;i<l;++i)
    {
        a[i]=s1[l-i-1]-'0';
    }
    for(int i=0;i<r;++i)
    {
        b[i]=s2[r-i-1]-'0';
    }
    for(int i=0;i<l;++i)
{
   for(int j=0;j<r;++j)
   {
    c[i+j]+=a[i]*b[j];
    c[i+j+1]+=c[i+j]/10;
    c[i+j]%=10;
   }
}
    l+=r;
    while(c[l]==0&&l>0)l--;
    for(int i=l;i>=0;--i)
    cout<<c[i];
    Sleep(10000);
    return 0;
}