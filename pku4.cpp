#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <algorithm>
#include <math.h>
using namespace std;

//for(int i=0;i<n;i++)
//scanf("",);
//printf("",);
#define ma 10000
int ans[10];
int t1;
int mark[ma+1];
int prime[ma+1];
int primesize=0;
void init()
{
    for(int i=0;i<ma;i++)
        mark[i]=0;
for(int i=2;i<ma;i++)
{
    if(mark[i]==1)continue;
    prime[primesize]=i;
    primesize++;
    for(int j=i*i;j<ma;j=j+i)
    mark[j]=1;
}
}
int isprime(long long x)
{
    if(x<10000)
    {
        for(int i=0;i<primesize;i++)
        {
            if(x==prime[i])
                return 1;
        }
        return 0;
    }
    if(x>10000)
    {
    for(int i=0;i<primesize;i++)
    {
        if(x%prime[i]==0)
            return 0;
    }
        return 1;
    }


}

int isok(long long x)
{
    int i=0;
    while(x)
    {
        ans[i]=x%10;
        x=x/10;
        i++;
    }
    i=i-1;
    for(int j=0;j<i;j++)
    {
        if(ans[j]!=ans[i-j])
            return 0;
    }
    return 1;
}

int main () {

init();
int n;
int t2=0;
scanf("%d",&n);
for(int i=pow(10,n-1);i<pow(10,n);i++)
{
    if(isok(i)&&isprime(i))
        t2++;
}
printf("%d\n",t2);
for(int i=pow(10,n-1);i<pow(10,n);i++)
{
    if(isok(i)&&isprime(i))
        printf("%d ",i);
}
return 0;
}
