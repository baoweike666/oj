#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
using namespace std;

int mark[101][101][101]={0};
int va,vb,vc;

class st{
public:
    int a;
    int b;
    int c;
    int t;
};

queue<st> q;

void atob(int va,int vb,int &a,int &b)
{
    if(a+b>=vb){a=a-(vb-b);b=vb;}
    else if(a+b<vb){b=a+b;a=0;}
}


int bfs()
{
    while(q.empty()!=1)
    {
        st x=q.front();
        q.pop();
        int na=x.a;
        int nb=x.b;
        int nc=x.c;
        int nt=x.t;
        atob(va,vb,na,nb);
        if(mark[na][nb][nc]==0)
        {
            if (2*na == va && 2*nb == va ) return nt+1;
            if (2*nc == va  && 2*nb == va ) return nt+1;
            if (2*na == va  && 2*nc == va ) return nt+1;
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
        atob(vb,va,nb,na);
        if(mark[na][nb][nc]==0)
        {
            if (2*na == va && 2*nb == va ) return nt+1;
            if (2*nc == va  && 2*nb == va ) return nt+1;
            if (2*na == va  && 2*nc == va ) return nt+1;
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
        atob(va,vc,na,nc);
        if(mark[na][nb][nc]==0)
        {
            if (2*na == va && 2*nb == va ) return nt+1;
            if (2*nc == va  && 2*nb == va ) return nt+1;
            if (2*na == va  && 2*nc == va ) return nt+1;
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
        atob(vc,va,nc,na);
        if(mark[na][nb][nc]==0)
        {
            if (2*na == va && 2*nb == va ) return nt+1;
            if (2*nc == va  && 2*nb == va ) return nt+1;
            if (2*na == va  && 2*nc == va ) return nt+1;
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
        atob(vb,vc,nb,nc);
        if(mark[na][nb][nc]==0)
        {
            if (2*na == va && 2*nb == va ) return nt+1;
            if (2*nc == va  && 2*nb == va ) return nt+1;
            if (2*na == va  && 2*nc == va ) return nt+1;
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
        atob(vc,vb,nc,nb);
        if(mark[na][nb][nc]==0)
        {
            if (2*na == va && 2*nb == va ) return nt+1;
            if (2*nc == va  && 2*nb == va ) return nt+1;
            if (2*na == va  && 2*nc == va ) return nt+1;
            mark[na][nb][nc]=1;
            st nx;
            nx.a=na;
            nx.b=nb;
            nx.c=nc;
            nx.t=nt+1;
            q.push(nx);
        }


    }
    return -1;
}



int main()
{

    cin>>va>>vb>>vc;

    st x;
    x.a=va;
    x.b=0;
    x.c=0;
    x.t=0;
    q.push(x);

    mark[va][0][0]=1;

    int ans;
    ans=bfs();
    cout<<ans;
    return 0;
}
