#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> edg[100];
queue<int> q;
int main()
{
    int init[100];
    int in[100];
    for(int i=0;i<100;i++)
    {
        in[i]=0;
        init[i]=0;
    }
    while(1)
    {
    int a,b;
    scanf("%d%d",&a,&b);
    if(a==0&&b==0)break;
    edg[a].push_back(b);
     in[b]++;
     init[a]=1;
     init[b]=1;

    }
    int cnt=0;
    int t1=0;//dian shu
    int t2=0;//>=2 shu
    int t3=0;//0 shu
    for(int i=0;i<100;i++)
    {
        if(init[i]==1)
            t1++;
    }
    for(int i=0;i<100;i++)
    {
        if(init[i]==1&&in[i]>=2)
            t2=1;
        if(init[i]==1&&in[i]==0)
        {t3++;q.push(i);}
    }
    while(q.empty()!=1)
    {
        int nwt=q.front();
        q.pop();
        cnt++;
        for(int i=0;i<edg[nwt].size();i++)
        {
            in[edg[nwt][i]]--;
            if(in[edg[nwt][i]]==0)
               q.push(edg[nwt][i]);
        }
    }
   // printf("%d %d %d %d ",cnt,t2,t3,t1);
    if(t1==cnt&&t2==0&&t3==1)
        printf("1");
    else
        printf("0");

    return 0;
}
