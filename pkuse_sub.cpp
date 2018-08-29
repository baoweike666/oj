#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;


int cnt,lt,i,j,k,t;
double c,min1;
double a,b;
double dis[1001];
int vis[1001];
int newp;
class edg{
public:
    int next;
    double cost;
};
vector<edg> el[1001];

class node{
public:
    double x;
    double y;
    int l;
}nl[1001];

double disr(node a,node b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))/(60*10.0/3.6);
}

double disc(node a,node b)
{
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y))/(60*40.0/3.6);
}

int main()
{
    cin>>nl[1].x>>nl[1].y;
    cin>>nl[2].x>>nl[2].y;
    nl[1].l=0;
    nl[2].l=0;
    edg tmp;
    tmp.next=1;
    tmp.cost=disr(nl[1],nl[2]);
    el[2].push_back(tmp);
    tmp.next=2;
    el[1].push_back(tmp);


    cnt=2;
    lt=1;
    while(cin>>a&&cin>>b)
    {
        if(a==-2)break;
        if(a==-1&&b==-1){lt++;continue;}
        cnt++;
        nl[cnt].l=lt;
        nl[cnt].x=a;
        nl[cnt].y=b;
        for(i=1;i<=cnt-1;i++)
        {
            edg tmp;
            tmp.next=i;
            if(nl[i].l==nl[cnt].l)tmp.cost=disc(nl[i],nl[cnt]);
            else if(nl[i].l!=nl[cnt].l)tmp.cost=disr(nl[i],nl[cnt]);
            el[cnt].push_back(tmp);
            tmp.next=cnt;
            el[i].push_back(tmp);
        }
    }




//dijkstra
    memset(dis,0x7f,sizeof(dis));
    memset(vis,0,sizeof(vis));
    dis[1]=0;
    vis[1]=1;
    newp=1;
    for(i=1;i<=cnt;i++)
    {
        for(j=0;j<el[newp].size();j++)
        {
            t=el[newp][j].next;
            c=el[newp][j].cost;
            if(vis[t]==1)continue;
            if(dis[t]>dis[newp]+c)dis[t]=dis[newp]+c;
        }
        min1=99999999;
        for(j=1;j<=cnt;j++)
        {
            if(vis[j]==1)continue;
            //if(dis[j]==-1)continue;
            if(dis[j]<min1)
            {
                min1=dis[j];
                newp=j;
            }
        }
        vis[newp]=1;
    }
//dijkstra

cout<<dis[2]<<endl;
//cout<<el[3][6].cost<<" "<<el[3][6].next;
    return 0;
}
