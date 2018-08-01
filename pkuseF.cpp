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
const int MAXN = 100010;
int card[MAXN];
bool flag[MAXN];
int main() {
    int m, n;
    int nIndex = 1;
    while (cin >> m >> n && m && n) {
        memset(flag, 0, sizeof(flag));
        for (int i = 1; i <= n; i++) {
            cin >> card[i];
            flag[card[i]] = true;
        }
        getchar();getchar();
        int ans = 0;
        for (int i = 1; i <= n; i++)  {
            bool isGreat = false;
            for (int j = 1; j <= n * m; j++) {
                if (!flag[j]) {
                    if (j > card[i]) {
                        isGreat = true;
                        flag[j] = true;
                        break;
                    }
                }
            }
            if (!isGreat) {
                ans ++;
            }
        }
        cout << "Case " << nIndex << ": " << ans << endl;
        nIndex ++;
    }
    return 0;
}
