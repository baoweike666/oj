#define _CRT_SECURE_NO_WARNINGS
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

#define INF 9999999
#define maxn 250+50
int T, n, m1, m2;
int t[maxn];
int a[maxn], b[maxn];
int has_train[maxn][maxn][2];
int dp[maxn][maxn];
int main()
{
    //freopen("test.txt", "r", stdin);
    int kase = 0;
    while (scanf("%d", &n) == 1 && n)
    {
        memset(has_train, 0, sizeof(has_train));
        scanf("%d", &T);
        t[0] = 0;
        t[n] = 0;
        for (int i = 1; i <= n - 1; i++)
            scanf("%d", t + i);
        scanf("%d", &m1);
        for (int i = 1; i <= m1; i++)
        {
            scanf("%d", a + i);
            int sum = a[i];
            for (int j = 0; j <= n - 1; j++)
            {
                sum += t[j];
                has_train[sum][j + 1][0] = 1;
            }
        }
        scanf("%d", &m2);
        for (int i = 1; i <= m2; i++)
        {
            scanf("%d", b + i);
            int sum = b[i];
            for (int j = n; j >= 1; j--)
            {
                sum += t[j];
                has_train[sum][j][1] = 1;
            }
        }
        for (int i = 1; i <= n - 1; i++)
            dp[0][i] = INF;
        dp[0][1] = 0;
        for (int i=2; i<=T;i++)
        for (int j=1; j <=n; j++)
        {
            dp[i][j] = dp[i-1][j] + 1;
            if (j-1>=1  && i - t[j-1] >= 0&&has_train[i - t[j-1]][j-1][0])//->
                dp[i][j] = min(dp[i][j], dp[i - t[j-1]][j - 1]);
            if (j+1<=n  && i - t[j] >= 0&& has_train[i - t[j]][j + 1][1])
                dp[i][j] = min(dp[i][j], dp[i - t[j]][j + 1]);
        }
        cout << "Case Number " << ++kase << ": ";
        if (dp[T][n] >= INF)cout << "impossible\n";
        else cout << dp[T][n] << '\n';
    }
    return 0;
}
