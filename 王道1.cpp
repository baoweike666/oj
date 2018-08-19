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
int dp[1001];
int a[1001];

int main()
{
    int n,i,j,max;
    cin>>n;
    for(i=1;i<=n;i++)cin>>a[i];
    dp[1]=1;
    for(i=1;i<=n;i++)
    {
        max=0;
        for(j=1;j<i;j++)
        {
          if(a[i]<=a[j]&&dp[j]>max)
          {
              max=dp[j];
          }
        }
        dp[i]=max+1;
    }

    max=0;
    for(i=1;i<=n;i++ )
    {
        if(max<dp[i])
            max=dp[i];
    }
    cout<<max;

    return 0;
}
