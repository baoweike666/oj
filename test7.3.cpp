#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <iostream>
#include <algorithm>
using namespace std;
//for(int i=0;i=<n;i++)
int n;
int a[100];
int ans[100];



int main()
{
    while(scanf("%d",&n))
    {
for(int i=1;i<=n;i++)
    scanf("%d",&a[i]);
ans[1]=1;
for(int i=2;i<=n;i++)//ans
    for(int j=1;j<i;j++)//a
    {
if(a[i]>=a[j])
{
    int t=ans[j]+1;
    if(t>ans[i]) ans[i]=t;
}
    }
int max=-1000;
for(int i=1;i<=n;i++)
{
    if(ans[i]>max)max=ans[i];
}
printf("%d",max);
    }
    return 0;
}
