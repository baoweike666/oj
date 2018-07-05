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

int n,m,t;
int sx,sy;
char maze[100][100];
int mark[100][100];
int ans;
int go[][2]={
    0,1,
    1,0,
    -1,0,
    0,-1,
};

void dfs(int x,int y,int time)
{
    for(int i=0;i<4;i++)
    {
       int nx=x+go[i][0];
       int ny=y+go[i][1];
       if(nx<1||nx>n||ny<1||ny>m)continue;
       if(maze[nx][ny]=='x')continue;
       if(mark[nx][ny]==1)continue;
       if(time+1==t&&maze[nx][ny]=='d')ans=1;
       mark[nx][ny]=1;
       dfs(nx,ny,time+1);
       mark[nx][ny]=0;
    }
    return;
}

int main()
{
    while(scanf("%d%d%d",&n,&m,&t))
    {
for(int i=1;i<=n;i++)
    scanf("%s",maze[i]+1);

for(int i=1;i<=n;i++)
    for(int j=1;i<=m;i++)
    {
        mark[sx][sy]=0;
        if(maze[i][j]=='s')
        {
            sx=i;sy=j;
        }
    }
mark[sx][sy]=1;
dfs(sx,sy,0);
printf("%d",ans);
    }
    return 0;
}
