#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<stdlib.h>
#include<queue>
#include<vector>
#include <algorithm>
#include <ctype.h>
using namespace std;
int dp[100][1000];
int main()
{
int res,n;
int cnt[100];
int moy[100];
int ans=0;
scanf("%d%d",&res,&n);
for(int i=1;i<=n;i++)
{
    scanf("%d%d",&cnt[i],&moy[i]);
}
memset(dp,0,sizeof(dp));
for(int i=0;i<=n;i++)dp[i][0]=1;

for(int i=1;i<=n;i++)
    for(int j=0;j<=res;j++)
        for(int k=0;k<=cnt[i];k++)
            if(j+k*moy[i]<=res&&dp[i-1][j]==1)dp[i][j+k*moy[i]]=1;
//cout<<dp[n][125]<<endl;

for(int i=res;i>=0;i--)
{
    if(dp[n][i]==1)
    {
        ans=i;
        break;
    }
}
cout<<ans;
    return 0;
}
