#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<cstring>
using namespace std;
char maze[1001][1001];
int mark[1001][1001]={0};
int m,n;

int go[8][2]={
    1,0,
    0,1,
    0,-1,
    -1,0,
    1,1,
    -1,1,
    1,-1,
    -1,-1,
};

void dfs(int x,int y)
{
  int nx,ny;
  for(int i=0;i<8;i++)
  {
      nx=x+go[i][0];
      ny=y+go[i][1];
      if (nx < 0 || nx >=m || ny < 0 || ny >=n) continue;
      if (maze[nx][ny] == '*') continue;
      if (mark[nx][ny]==1) continue;
      mark[nx][ny]=1;
      dfs(nx,ny);
  }
}

int main()
{
    cin>>m>>n;
    int ans=0;
    for(int i=0;i<m;i++)
    {
        scanf("%s",maze[i]);
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(maze[i][j]=='@'&&mark[i][j]==0)
               {mark[i][j]=1; dfs(i,j);ans++;}
        }


    cout<<ans;
    return 0;
}
