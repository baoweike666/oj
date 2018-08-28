#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<cstring>
using namespace std;

char str[10001];
char s[10001];
int a[10001];
char c;

int main()
{

    int i,j,k;
    int cnt;
    cin>>str;
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<'a')str[i]=str[i]+32;
    }
    for(i=0,k=0;i<strlen(str);i++)
    {
        c=str[i];
        cnt=1;
        j=i;
        while(str[j+1]==c)
        {
            j++;
            cnt++;
        }
        i=j;
        s[k]=c;
        a[k]=cnt;
        k++;
    }
    for(i=0;i<k;i++)
    cout<<"("<<s[i]<<","<<a[i]<<")";
    return 0;
}
