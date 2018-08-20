#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<cstring>
using namespace std;
char maze[1001][1001];
int mark[1001][1001]={0};
int m,n,T;
int stx,sty;
int ss=-1;

int go[4][2]={
    1,0,
    0,1,
    0,-1,
    -1,0,
};

void dfs(int x,int y,int t)
{
  int nx,ny,nt;
  for(int i=0;i<4;i++)
  {
      nx=x+go[i][0];
      ny=y+go[i][1];
      nt=t+1;
//      cout<<x<<y<<endl;
      if (nx < 0 || nx >=m || ny < 0 || ny >=n) continue;
      if (maze[nx][ny] =='X') continue;
      if (mark[nx][ny]==1) continue;
      if (maze[nx][ny]=='D'&&nt!=T) continue;
      if (maze[nx][ny]=='D'&&nt==T) {ss=1;return;}
      mark[nx][ny]=1;
      dfs(nx,ny,nt);
      mark[nx][ny]=0;
  }
}

int main()
{
    cin>>m>>n>>T;
    for(int i=0;i<m;i++)
    {
        scanf("%s",maze[i]);
    }
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
        {
            if(maze[i][j]=='S'){stx=i;sty=j;break;}
        }

    mark[stx][sty]=1;
    dfs(stx,sty,0);
    cout<<ss;
    return 0;
}
