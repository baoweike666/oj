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
int dp[101][10001];
int a[101];
int m,n,i,j,k;

int main()
{
cin>>n>>m;
  for(i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  //dp[i][j] 前i个币种，总和为j的方法数
  for(i=0;i<=n;i++)
      for(j=0;j<=10001;j++)
          dp[i][j]=0;
  for(i=0;i<=n;i++)dp[i][0]=1;

  for(i=1;i<=n;i++)
      for(j=1;j<=10001;j++)
      {
          dp[i][j]=dp[i-1][j];
        for(k=1;k<=10001;k++)
        {

            if(j-k*a[i]>=0)
            dp[i][j]=dp[i][j]+dp[i-1][j-k*a[i]];
        }
      }
  cout<<dp[n][m];

    return 0;
}
