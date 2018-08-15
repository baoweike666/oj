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
int maze[1001][1001];
int m,n;

int main()
{
  int i,j;
  for(i=0;i<=1000;i++)
        for(j=0;j<=1000;j++)
            maze[i][j]=-1;
  cin>>n;
  cin>>m;

  for(i=1;i<=n;i++)
      for(j=1;j<=m;j++)
          cin>>maze[i][j];
  cout<<maze[1][1];maze[1][1]=-1;
  for(int k=1,i=1,j=1;k<=round(min(m,n)/2.0);k++)
  {

      while(maze[i][j+1]!=-1){j++;cout<<maze[i][j];maze[i][j]=-1;}
      while(maze[i+1][j]!=-1){i++;cout<<maze[i][j];maze[i][j]=-1;}
      while(maze[i][j-1]!=-1){j--;cout<<maze[i][j];maze[i][j]=-1;}
      while(maze[i-1][j]!=-1){i--;cout<<maze[i][j];maze[i][j]=-1;}

  }

    return 0;
}
