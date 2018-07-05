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
int c,n;
int cost[100];
int value[100];
int dp[100][100];


int main()
{

    while(scanf("%d%d",&c,&n))
    {
        for(int i=1;i<=n;i++)
        {
            scanf("%d%d",&cost[i],&value[i]);
        }

//    sort(a+1,a+m+1);
//    for(int i=1;i<=m;i++)
//    {
//        printf("%d",a[i]);
//    }
        //dp[i][j] 前i个草药，容量j
    for(int i=0;i<=n;i++)
    {
    dp[i][0]=0;
    }
    for(int i=0;i<=c;i++)
    {
    dp[0][i]=0;
    }



    for(int i=1;i<=n;i++)  //dp[i][j] 前i个草药，容量j
        for(int j=1;j<=c;j++)
        {
            if(j>=cost[i])
              dp[i][j]=max(dp[i-1][j],dp[i-1][j-cost[i]]+value[i]);
            else
                dp[i][j]=dp[i-1][j];

        }
printf("%d",dp[n][c]);
    }
    return 0;
}
