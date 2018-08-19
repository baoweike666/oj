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
int dp[1001][1001];
char s1[1001];
char s2[1001];

int main()
{
    int n1,n2,i1,i2;
    cin>>s1;
    cin>>s2;
    n1=strlen(s1);
    n2=strlen(s2);
    for(i1=0;i1<n1;i1++)dp[i1][0]=0;
    for(i2=0;i2<n2;i2++)dp[0][i2]=0;
    for(i1=0;i1<n1;i1++)
        for(i2=0;i2<n2;i2++)
        {
            if(s1[i1]==s2[i2])dp[i1][i2]=dp[i1-1][i2-1]+1;
            else
            {
                dp[i1][i2]=max(dp[i1-1][i2],dp[i1][i2-1]);
            }

        }


    cout<<dp[n1-1][n2-1];
    return 0;
}
