#include<iostream>
#include<stdio.h>
#include<stack>
#include<string>
#include<stdlib.h>
#include<queue>
#include<vector>
#include <algorithm>
#include<functional>
#include <ctype.h>
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
0,-1
};

void dfs(st a)
{
int nx,ny,ncost,nstate;
st na;
for(int i=0;i<=3;i++)
{
nx=a.x+go[i][0];
ny=a.y+go[i][1];
if(nx>=6||ny>=6||nx<=-1||ny<=-1)continue;
if(mark[nx][ny]==1)continue;

ncost=a.cost+a.state*maze[nx][ny];
nstate=(a.state*maze[nx][ny])%4+1;
if(nx==endx&&ny==endy&&ncost>=ans)return;
if(nx==endx&&ny==endy&&ncost<ans){ans=ncost;return;}


na.x=nx;
na.y=ny;
na.state=nstate;
na.cost=ncost;

mark[nx][ny]=1;
dfs(na);
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

ans=100000;
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

if(stx==endx&&sty==endy)cout<<0;
else
    cout<<ans;

return 0;
}

