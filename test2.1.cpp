#include <iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;

int main()
{
    int n;
    int i;
    while(scanf("%d",&n)==1)
    {
         int a[1000];
        for (i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
    sort(a,a+n,less<int>());
    for (i=0;i<n;i++)
   printf("%d ",a[i]);
    printf("\n");
    }
    return 0;
}
