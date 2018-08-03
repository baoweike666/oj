#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<stdlib.h>
#include<queue>
#include<vector>
#include <algorithm>
#include<functional>
#include <ctype.h>
using namespace std;
int dp[4][1001];
int a[1001];
int b[1001]={0};
int main() {
    int n,m;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
     cin>>a[i];
    }
    cin>>m;
    for(int i=1;i<=n;i++)
    {
         dp[0][i]=0;
    }
    for(int i=1;i<=m;i++)
        for(int j=1;j<=i;j++)
        {
            b[i]=b[i]+a[j];
        }
    for(int i=m+1;i<=n;i++)
        for(int j=0;j<m;j++)
        {
            b[i]=b[i]+a[i-j];
        }
//    for(int i=1;i<=n;i++)
//        cout<<b[i]<<" ";
    for(int i=1;i<=3;i++)
      for(int j=1;j<=n;j++)
      {
          dp[i][j]=max(dp[i][j-1],dp[i-1][j-m]+b[j]);
      }
    cout<<dp[3][n]<<endl;
    return 0;
}
