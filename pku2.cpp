#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include <algorithm>
using namespace std;

int a,b,c,a1,b1,c1;
char t;
int ans[100];
int t1;
int t2;
int main () {
    scanf("%d-%d-%d-%c",&a1,&b1,&c1,&t);
a=a1;
b=b1;
c=c1;
ans[0]=a*1;
ans[1]=(b/100)*2;
b=b%100;
ans[2]=(b/10)*3;
b=b%10;
ans[3]=(b/1)*4;
ans[4]=(c/10000)*5;
c=c%10000;
ans[5]=(c/1000)*6;
c=c%1000;
ans[6]=(c/100)*7;
c=c%100;
ans[7]=(c/10)*8;
c=c%10;
ans[8]=(c/1)*9;
t1=0;
t2=0;
for(int i=0;i<=8;i++)
{
    t1=t1+ans[i];
}
//cout<<t1;
t1=t1%11;
if(t1==t-'0')
    t2=1;
else if(t1==10&&t=='X')
    t2=1;

if(t2==1)
    printf("Right");
else if(t1!=10)
    printf("%d-%d-%d-%d",a1,b1,c1,t1);
else if(t1==10)
    printf("%d-%d-%d-X",a1,b1,c1);
return 0;

}
