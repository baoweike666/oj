#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<deque>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<functional>
using namespace std;
int n,k,i,j;
int dp[1001][1001];
int a[1001];

//a[j]*a[j]-a[j-1]*a[j-1]

int main()
{
    cin>>n>>k;
    k=k*2;
    for(i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);

    for(i=0;i<=n;i++)
        for(j=0;j<=k;j++)
            dp[i][j]=0;

    for(i=1;i<=n;i++)
        for(j=2;j<=k;j++)
        {
             dp[i][j]=dp[i-2][j-2]+(a[i]-a[i-1])*(a[i]-a[i-1]);
             if(j<i)
             dp[i][j]=min(dp[i-1][j],dp[i-2][j-2]+(a[i]-a[i-1])*(a[i]-a[i-1]));
        }

    cout<<dp[n][k];


    return 0;
}
