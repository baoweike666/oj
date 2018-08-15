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
char s[1001];


int main()
{
scanf("%s",s);
int n=strlen(s);
long long ans=0;
int k=1;
for(int i=n-1;i>=2;i--)
{
    if(s[i]>='A')
    {ans+=(s[i]-'A'+10)*k;k=k*16;}
    else
    {ans+=(s[i]-48)*k;k=k*16;}
}
cout<<ans;
    return 0;
}
