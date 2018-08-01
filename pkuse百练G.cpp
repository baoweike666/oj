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
class edge{
public:
    int a;
    int b;
    int cost;
}el[101];
int cmp(edge a,edge b){
    return a.cost<b.cost;
}

int tree[101];
int findroot(int x)
{
    if(tree[x]==-1)return x;
    else return findroot(tree[x]);
}


int main()
{
  int n,m;
  scanf("%d%d",&n,&m);
  for(int i=0;i<m;i++)
  {
      scanf("%d%d%d",&el[i].a,&el[i].b,&el[i].cost);
  }
  sort(el,el+m,cmp);
  int ans=0;
  memset(tree,-1,sizeof(tree));
  for(int i=0;i<m;i++)
  {
      int a=findroot(el[i].a);
      int b=findroot(el[i].b);
      if(a!=b)
      {
          tree[a]=b;
          ans=ans+el[i].cost;
      }

  }
  cout<<ans;
    return 0;
}
