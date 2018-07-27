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

using namespace std;
int cur[101];
int tot;
    int n;
void dfs(int x)
{
    if(x==n)
    {
        tot++;
        for(int i=1;i<=n;i++)
        printf("%d ",cur[i]);
        printf("\n");
    }
    else
    {
        for(int i=1;i<=n;i++)
        {
            int flag=1;
         for(int j=1;j<=x;j++)
         {
             if(i==cur[j]||i-cur[j]==x+1-j||i-cur[j]==j-(x+1)) flag=0;
         }
         if(flag==1)
         {
             cur[x+1]=i;
             dfs(x+1);
         }

        }
    }

}

int main()
{
    int tot=0;

    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        cur[1]=i;
          dfs(1);
    }


	return 0;
}
