#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>

using namespace std;

class e
{
public:
    int next;
    int cost;
};
vector<e> edge[100];

int main()
{
    int n,m;
    int mark[100];
    int dis[100];
while(scanf("%d",&n)==1&&scanf("%d",&m)==1)
{
    for(int i=0;i<n;i++) edge[i].clear();
    for(int i=0;i<m;i++)
    {
        int a,b,c;
        e e1;
        scanf("%d%d%d",&a,&b,&c);
        e1.next=b-1;
        e1.cost=c;
        edge[a-1].push_back(e1);
        e1.next=a-1;
        edge[b-1].push_back(e1);
    }
    for(int i=0;i<n;i++)
    {
        dis[i]=-1;
        mark[i]=-1;
    }
    mark[0]=1;
    dis[0]=0;
    int newt=0;
    for(int i=0;i<edge[newt].size();i++)
    {

        int co=edge[newt][i].cost;
        int ne=edge[newt][i].next;
        if(mark[ne]==1)continue;
        if(dis[ne]==-1||dis[ne]>dis[newt]+co)
            dis[ne]=dis[newt]+co;

    }
    int min=100000;
    for(int j=0;j<n;j++)
{
         if(mark[j]==1) continue;
        if(dis[j]!=-1&&dis[j]<min)
    {
        min=dis[j];
        newt=j;
}
}
printf("%d",dis[n-1]);


}
    return 0;
}
