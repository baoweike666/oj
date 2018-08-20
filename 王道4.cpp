#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<cstdio>
#include<cstring>
#include<cmath>
using namespace std;

int mark[1001][1001][1001]={0};
int va,vb,vc;

class st{
public:
    int a;
    int b;
    int c;
    int t;
};

queue<st> q;

void atob(int &a,int &b)
{
    if(a+b>=vb){a=a-(vb-b);b=vb;}
    if(a+b<vb){b=a+b;a=0;}
}


int bfs(st x)
{
    while(q.empty()!=1)
    {
        q.pop();
        int na=x.a;
        int nb=x.b;
        int nc=x.c;
        int nt=x.t;
        atob(na,nb);
        if(mark[na][nb][nc]==0)
        {
            if(na==nb&&na==nc)return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }

        na=x.a;
        nb=x.b;
        nc=x.c;
        nt=x.t;
        atob(nb,na);
        if(mark[na][nb][nc]==0)
        {
            if(na==nb&&na==nc)return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }

        na=x.a;
        nb=x.b;
        nc=x.c;
        nt=x.t;
        atob(na,nc);
        if(mark[na][nb][nc]==0)
        {
            if(na==nb&&na==nc)return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }

        na=x.a;
        nb=x.b;
        nc=x.c;
        nt=x.t;
        atob(nc,na);
        if(mark[na][nb][nc]==0)
        {
            if(na==nb&&na==nc)return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }


        na=x.a;
        nb=x.b;
        nc=x.c;
        nt=x.t;
        atob(nb,nc);
        if(mark[na][nb][nc]==0)
        {
            if(na==nb&&na==nc)return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }

        na=x.a;
        nb=x.b;
        nc=x.c;
        nt=x.t;
        atob(nc,nb);
        if(mark[na][nb][nc]==0)
        {
            if(na==nb&&na==nc)return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }


    }
}



int main()
{

    st x;
    cin>>va>>vb>>vc;

    x.a=va;
    x.b=0;
    x.c=0;
    x.t=0;
    q.push(x);
    mark[va][0][0]=1;

    int ans=bfs(x);
    cout<<ans;
    return 0;
}
