#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<cstring>
using namespace std;
int n,i;
int mark[101];
int a[101];
int prime[13] = {2,3,5,7,11,13,17,19,23,29,31,37,41};
int isprime(int x)
{
    for(i=0;i<13;i++)
    {
        if(prime[i]==x)return 1;
    }
    return 0;
}

void dfs(int x)
{
    if(x==n)
    {
        if(isprime(a[n]+a[1])==1)
        {
            for(i=1;i<=n;i++)cout<<a[i]<<" ";
            cout<<endl;
            return;
        }
        else
        return;
    }
    else
    for(int i=2;i<=n;i++)
    {
        if(mark[i]==1)continue;
        if(isprime(a[x]+i)==1)
        {
        mark[i]=1;
        a[x+1]=i;
        cout<<i<<endl;
        dfs(x+1);
        mark[i]=0;
        }
    }

}

int main()
{

    n=8;
    for(i=0;i<101;i++)mark[i]=0;
    a[1]=1;
    mark[1]=1;
    dfs(1);
    //cout<<endl<<isprime(7);
    return 0;
}
