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
int n;
char s[501];
char s1[501];
int flag;
int ans;
int a[100];
int main()
{
  scanf("%d",&n);
  scanf("%s",s);
  int max=-1000;
  int i,j,k;
for(i=0;i+n<=strlen(s);i++)
 {
     ans=1;
     for(j=0;j<n;j++)
     {
         s1[j]=s[i+j];
     }

     for(k=i+1;k+n<=strlen(s);k++)
     {
        flag=1;
        for(j=0;j<n;j++)
        {
            if(s1[j]!=s[k+j])
                flag=0;
        }
        if(flag==1)ans++;
     }
     a[i]=ans;
     if(max<ans)
     {
         max=ans;
     }
 }
cout<<max<<endl;
for(i=0;i+n<=strlen(s);i++)
{
char s2[501];
if(a[i]==max)
{
for(j=0;j<n;j++)
{
    s2[j]=s[i+j];
}
cout<<s2<<endl;
}
}

}
