#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <iostream>
#include <algorithm>
using namespace std;

int ans[100];
int mark[100];
int n;
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41};
int isprime(int x)
{

    for(int i=0;i<13;i++)
    {
        if(prime[i]==x)return 1;
    }
  return 0;
}
void check()
{
    if(isprime(ans[n]+ans[1]))
    {
            for (int i=1;i<=n;i++)printf("%d",ans[i]);
    }
    else return;
}

void find(int num)
{
    if(num>1&&isprime(ans[num]+ans[num-1])!=1)return;
    if(num==n){check();return;}

    for(int i=1;i<=n;i++)
    {
        if(mark[i]!=1)
        {
        ans[num+1]=i;
        mark[i]=1;
        find(num+1);
        mark[i]=0;
        }
    }
}

int main()
{
    while(scanf("%d",&n))
    { for(int i=1;i<=n;i++)
        {mark[i]=0;
        }
ans[1]=1;
mark[1]=1;
        find(1);


    }
    return 0;
}
