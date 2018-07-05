#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <iostream>
#include <algorithm>
using namespace std;
//for(int i=0;i<=n;i++)
//scanf("%d%d",&m,&n)
int m,n;
int a[100];
int dp[100][100];


int main()
{

    while(scanf("%d%d",&m,&n))
    {
        for(int i=1;i<=m;i++)
        {
            scanf("%d",&a[i]);
        }

    sort(a+1,a+m+1);
//    for(int i=1;i<=m;i++)
//    {
//        printf("%d",a[i]);
//    }
    for(int i=0;i<=m;i++)
    {
    dp[i][0]=0;
    }
    for(int i=1;i<=m;i++)//dp[m][n] dp[i][j] i选j
        for(int j=1;j<=i;j++)
        {
          if(j==i)
              dp[i][j]=dp[i-2][j-2]+(a[i]-a[i-1])*(a[i]-a[i-1]);
          else
              dp[i][j]=min(dp[i-1][j],dp[i-2][j-2]+(a[i]-a[i-1])*(a[i]-a[i-1]));

        }
printf("%d",dp[m][n]);
    }
    return 0;
}
