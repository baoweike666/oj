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
char a[100];
char b[100];
int dp[100][100];



int main()
{

    scanf("%s",a);
    scanf("%s",b);
    int la=strlen(a);
    int lb=strlen(b);
for(int i=0;i<=la;i++)
{
    dp[i][0]=0;
}
for(int i=0;i<=lb;i++)
{
    dp[0][i]=0;
}

for(int i=1;i<=la;i++){
    for(int j=1;j<=lb;j++)
    {
        if(a[i-1]!=b[j-1])
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
if(a[i-1]==b[j-1])
    dp[i][j]=dp[i-1][j-1]+1;

    }
}
//for (int i = 1;i <= la;i ++) {
//for (int j = 1;j <= lb;j ++) { //二重循环依次求得每个dp[i][j]值
//if (a[i - 1] != b[j - 1]) //因为字符串数组下标从0开始，所以第i

//dp[i][j] = max(dp[i][j - 1],dp[i - 1][j]); //dp[i][j]为
//else dp[i][j] = dp[i - 1][j - 1] + 1; //若它们相等，则dp[i][j]
//}
//}

printf("%d",dp[la][lb]);
    return 0;
}
