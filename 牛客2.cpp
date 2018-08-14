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
int a[100];
int m,n;
char c;
int getmax(int *a,int n,int b1,int b2)
{
    int max=-100;
    for(int i=b1;i<=b2;i++)
    {
        if(a[i]>max)max=a[i];
    }
    return max;
}

int main()
{
  cin>>n>>m;
  int b1,b2;
  for(int i=1;i<=n;i++)cin>>a[i];
  while(scanf("%c",&c)!=EOF)
  {
      scanf("%d%d",&b1,&b2);
      if(c=='U')a[b1]=b2;
      else if(c=='Q')cout<<getmax(a,n,b1,b2)<<endl;
  }

  return 0;
}
