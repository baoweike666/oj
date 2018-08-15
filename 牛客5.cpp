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
char s1[1001];
char c;
int toA(int c)
{
    if(c>=97)c=c-(97-65);
        return c;
}
int cmp(char a,char b)
{
    return toA(a)<toA(b);
}

int main()
{
    int i,j;
    gets(s);
    int n=strlen(s);
    for(i=0,j=0;i<n;i++)
    {
        if(isalpha(s[i]))
            s1[j++]=s[i];
    }
stable_sort(s1,s1+j,cmp);
//    for(i=0;i<=j;i++)
//    {
//      printf("%c",s1[i]);
//    }
  for(i=0,j=0;i<n;i++)
  {
        if(isalpha(s[i]))
           printf("%c",s1[j++]);
        else
           printf("%c",s[i]);
  }

    return 0;
}
