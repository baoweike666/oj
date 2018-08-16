#include<iostream>
#include<stdio.h>
#include<stack>
#include<cstring>
#include<stdlib.h>
#include<queue>
#include<vector>
#include <algorithm>
#include<functional>
#include <ctype.h>

using namespace std;




int main()
{
    char a[100],b[100],a1[100],b1[100],c[100],c1[100];
    int ans1,ans2,i,k;
    cin>>a>>b;
    ans1=stoi(a)+stoi(b);
    int na=strlen(a);
    int nb=strlen(b);
    for(i=0;i<=na-1;i++)
    {
        a1[na-1-i]=a[i];
    }
    for(i=0;i<=nb-1;i++)
    {
        b1[nb-1-i]=b[i];
    }
    ans2=int(stoi(a1)+stoi(b1));

    k=1;
    i=0;
    while(ans2!=0)
    {
        c[i++]=ans2%10+'0';
        ans2=ans2/10;
    }
    ans2=stoi(c);
    if(ans1==ans2)
    cout<<ans1;
    else
    cout<<"NO";
    return 0;
}
