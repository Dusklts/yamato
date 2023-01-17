#include<iostream>
#include<cstdio>
#include<cstring>
#include<windows.h>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int fa(int n){
    if(n <= 1)
    return n;
    // 先创建一个数组来保存历史数据
    int dp[1000];
    // 给出初始值
    dp[1] = 1;
    dp[2] = 2;
    // 通过关系式来计算出 dp[n]
    for(int i = 3; i <= n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    // 把最终结果返回
    return dp[n];
}


int main()

{   int n,b;
    cin>>n;
    b=fa(n);
    cout<<b;
    Sleep(10000);
    return 0;
}