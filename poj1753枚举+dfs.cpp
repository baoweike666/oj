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

int maze[7][7]={0};
int step;
int ans=0;
void fl(int x,int y)
{
    maze[x][y]=!maze[x][y];
    maze[x+1][y]=!maze[x+1][y];
    maze[x][y+1]=!maze[x][y+1];
    maze[x-1][y]=!maze[x-1][y];
    maze[x][y-1]=!maze[x][y-1];
}
int isok()
{
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
        {
            if(maze[i][j]!=maze[1][1])return 0;
        }
    return 1;
}

void dfs(int x,int y,int deep)
{
    if(deep==step)
    {
        ans=isok();
        return;
    }
    if(ans==1||x==5)
        return;

    fl(x,y);
    if(y<=3)
    dfs(x,y+1,deep+1);
    else dfs(x+1,1,deep+1);

    fl(x,y);
    if(y<=3)
    dfs(x,y+1,deep);
    else dfs(x+1,1,deep);

}

int main()
{
    char c;
    for(int i=1;i<=4;i++)
        for(int j=1;j<=4;j++)
        {
            cin>>c;
            if(c=='b')maze[i][j]=1;
        }

    for(step=0;step<=16;step++)
    {
        dfs(1,1,0);
        if(ans==1)break;
    }
    if(ans==1)
    printf("%d",step);
    else
    printf("Impossible");
    return 0;
}
