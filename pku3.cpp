#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <algorithm>
using namespace std;

//for(int i=0;i<n;i++)

int maze[100][100];

int main () {
    int n,sum,ans;
    scanf("%d",&n);
    sum=0;ans=0;
for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        int t;
        scanf("%d",&t);
        if(t<=50)
        {maze[i][j]=1;sum++;}
        else
        maze[i][j]=0;
    }

for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
    {
        if(maze[i][j]==1&&(maze[i-1][j]==0||maze[i+1][j]==0||maze[i][j-1]==0||maze[i][j+1]==0))
        ans++;

    }
cout<<sum<<endl;
cout<<ans<<endl;
return 0;

}
