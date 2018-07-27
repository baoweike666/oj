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
int p[101];
int n,m;
int s=0;
int cnt=-1;

int iscf(int i,int j)
{
    int t=(j+1-i)/2;
    for(int k=i;k<=i+t-1;k++)
    {
        if(p[k]!=p[k+t])return 0;
    }
    return 1;
}

void dfs(int x)
{
cnt++;
if(cnt==m&&s==0)
{
   for(int i=1;i<=x;i++)
      printf("%c ",'A'+p[i]-1);
      printf("\n");
      s=1;
}
else if(s==0)
{
    for(int j=1;j<=n;j++)
    {
        int flag=1;
        p[x+1]=j;
    for(int i=0;x-i>=1;i=i+2)
    {
       if(iscf(x-i,x+1))flag=0;
    }
    if(flag==1)
    {
    dfs(x+1);
    }
    }
}
}

int main()
{
    scanf("%d%d",&m,&n);
    dfs(0);
    return 0;
}
