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

using namespace std;
int p[101];
int n;
int mark[101];
int prime[11]={2,3,5,7,11,13,17,19,23,29,31};
int isprime(int x)
{
    for(int i=0;i<11;i++)
    {
        if(prime[i]==x)
            return 1;
    }
    return 0;
}

void dfs(int x)
{
if(x==n)
{
    if(isprime(p[n]+p[1]))
    {
        for(int i=1;i<=n;i++)
            printf("%d ",p[i]);
    printf("\n");
    }
}
else
{
    for(int i=1;i<=n;i++)
    {
        if(mark[i]==1)continue;
        if(isprime(p[x]+i))
        {
            p[x+1]=i;
            mark[i]=1;
            dfs(x+1);
            mark[i]=0;
        }
    }
}
}

int main()
{


    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    mark[i]=0;

    mark[1]=1;
    p[1]=1;
    dfs(1);
	return 0;
}
