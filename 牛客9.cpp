#include<stdio.h>
#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

class st{
public:
int x;
int y;
int state;
int cost;
}sl[1000];

int stx,sty,endx,endy,ans;
int maze[10][10];
int mark[10][10];
int go[4][2]={
1,0,
0,1,
-1,0,
0,-1,
}

void dfs(st a)
{
int nx,ny,ncost,nstate;
st na;
for(int i=0;i<=3;i++)
{
nx=a.x+go[i][0];
ny=a.y+go[i][1];
ncost=a.cost+a.state*maze[nx][ny];
nstate=ncost%4+1;
if(nx>=6||ny>=6||nx<=-1||ny<=-1)continue;
if(mark[nx][ny]==1)continue;
if(nx=endy&&ny==endy&&ncost<ans)ans=ncost;
mark[nx][ny]=1;
dfs(nx,ny);
mark[nx][ny]=-1;
}
}

int main()
{

for(int i=0;i<=5;i++)
for(int j=0;j<=5;j++)
{
cin>>maze[i][j];
}
cin>>stx>>sty>>endx>>endy;

ans=0;
for(int i=0;i<=5;i++)
for(int j=0;j<=5;j++)
{
mark[i][j]=-1;
}
mark[stx][sty]=1;
st a;
a.x=stx;
a.y=sty;
a.state=1;
a.cost=0;

dfs(a);

cout<<ans;

return 0;
}
