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



class island{
public:
    int x;
    int y;
}il[100];
class rida{
public:
    int st;
    int ed;
}rl[100];
int cmp(rida a,rida b)
{
    if(a.ed==b.ed)
    return a.st>b.st;
    else
    return a.ed<b.ed;
}

int main()
{
    int n,d;
    int tp=1;
    int ans=0;
    scanf("%d%d",&n,&d);
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&il[i].x,&il[i].y);
    }
    int maxy=0;
    int miny=0;
    for(int i=0;i<n;i++)
    {
        if(il[i].y>maxy)maxy=il[i].y;
        if(il[i].y<miny)miny=il[i].y;
    }
    if(abs(maxy)>d||abs(miny)>d)tp=-1;
    for(int i=0;i<n;i++)
    {
        rl[i].st=il[i].x-sqrt(d*d-il[i].y*il[i].y);
        rl[i].ed=il[i].x+sqrt(d*d-il[i].y*il[i].y);
    }
    sort(rl,rl+n,cmp);
    int vis[100]={0};
    for(int i=0;i<n;i++)
    {
       if(vis[i]==0)
       {
           vis[i]=1;
           for(int j=0;j<n;j++)
           {
               if(rl[j].st<rl[i].ed)vis[j]=1;
           }
           ans++;
       }
    }
    if(tp==1)
    cout<<ans;
    else
    cout<<"Imposible";
    return 0;
}
