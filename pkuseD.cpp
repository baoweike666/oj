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

char maze[101][101];
char str[101];
int flag[9];
int main() {
int n;
cin>>n;
int ok;
int a,b,c,d,i,j;
for(i=0;i<n;i++)
{
    scanf("%s",maze[i]);
}
while(scanf("%s",str))
{
    if(str[0]=='0')break;
    ok=0;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    {
           for(int k=1;k<=8;k++)
           {
               flag[k]=1;
           }
           for(int k=0;k<strlen(str);k++)
           {
               if(maze[i+k][j]!=str[k])flag[1]=0;
               if(maze[i-k][j]!=str[k])flag[2]=0;
               if(maze[i][j+k]!=str[k])flag[3]=0;
               if(maze[i][j-k]!=str[k])flag[4]=0;
               if(maze[i+k][j+k]!=str[k])flag[5]=0;
               if(maze[i-k][j-k]!=str[k])flag[6]=0;
               if(maze[i+k][j-k]!=str[k])flag[7]=0;
               if(maze[i-k][j+k]!=str[k])flag[8]=0;
           }

           if(flag[1]==1){ok=1;a=i;b=j;c=i+strlen(str)-1;d=j;}
           if(flag[2]==1){ok=1;a=i;b=j;c=i-strlen(str)+1;d=j;}
           if(flag[3]==1){ok=1;a=i;b=j;c=i;d=j+strlen(str)-1;}
           if(flag[4]==1){ok=1;a=i;b=j;c=i;d=j-strlen(str)+1;}
           if(flag[5]==1){ok=1;a=i;b=j;c=i+strlen(str)-1;d=j+strlen(str)-1;}
           if(flag[6]==1){ok=1;a=i;b=j;c=i-strlen(str)+1;d=j-strlen(str)+1;}
           if(flag[7]==1){ok=1;a=i;b=j;c=i+strlen(str)-1;d=j-strlen(str)+1;}
           if(flag[8]==1){ok=1;a=i;b=j;c=i-strlen(str)+1;d=j+strlen(str)-1;}
    }
    if(ok)cout<<a+1<<","<<b+1<<" "<<c+1<<","<<d+1<<endl;
    if(ok==0)cout<<"Not found"<<endl;
}

    return 0;
}
