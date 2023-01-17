#include <bits/stdc++.h>
#include <algorithm>
//#include <windows.h>
using namespace std;
int main()
{ 
   unsigned long long a;
    long long ans=0;
   cin>>a;
  for(int i=1;i<=a;i++)
	    {	int fk=1;
            for(int j=1;j<=i;j++)
                fk*=j;
                ans+=fk;
	    }
   cout<<ans;
  // Sleep(10000);
    return 0;
}