#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <iostream>
#include <algorithm>
using namespace std;
//for(int i=0;i<n;i++)

int m,n;
char maze[100][100];
int mark[100][100];
int ans;
int go[][2]={
    0,1,
    1,0,
    -1,0,
    0,-1,
    1,1,
    -1,-1,
    1,-1,
    -1,1,

};

void dfs(int x,int y)
{
    for(int i=0;i<8;i++)
    {
       int nx=x+go[i][0];
       int ny=y+go[i][1];
       if(nx<1||nx>n||ny<1||ny>m)continue;
       if(maze[nx][ny]=='*')continue;
       if(mark[nx][ny]==1)continue;
       mark[nx][ny]=1;
       dfs(nx,ny);
    }
    return;
}

int main()
{
    while(scanf("%d%d",&n,&m))
    {
        for(int i=1;i<=m;i++)
        {
            scanf("%s",maze[i]+1);
        }

        for(int i=1;i<=n;i++)
       for(int j=1;j<=m;j++)
       {
           mark[i][j]=0;
       }
        ans=0;
        for(int i=1;i<=n;i++)
               for(int j=1;j<=m;j++)
               {
                   if(mark[i][j]==1)continue;
                   if(maze[i][j]=='*')continue;
                   dfs(i,j);
                   ans++;
               }
printf("%d",ans);
    }
    return 0;
}
