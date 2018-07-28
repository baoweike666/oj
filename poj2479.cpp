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
        //dp2[i]=max(dp2[i-1],dp2[i-1]+a2[i]);
int dp1[100];
int dp2[100];
int a1[100];
int a2[100];
int main()
{


    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a1[i]);
        a2[n+1-i]=a1[i];
    }
    dp1[0]=0;
    dp2[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp1[i]=max(a1[i],dp1[i-1]+a1[i]);
        dp2[i]=max(a2[i],dp2[i-1]+a2[i]);
    }
    printf("%d\n",dp2[7]);
    int max=-1000;
    int max1=-1000;
    int max2=-1000;
    for(int i=1;i<=n;i++)
    {
        max1=-1000;
        max2=-1000;
        for(int j=1;j<=i;j++)
        {
            if(max1<dp1[j])max1=dp1[j];
        }
        for(int j=1;j<=n-i;j++)
        {
            if(max2<dp2[j])max2=dp2[j];
        }
        if(max<max1+max2)max=max1+max2;
    }
    cout<<max;
    return 0;
}
