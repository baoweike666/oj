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
int m,n;
int dp(int m,int n)//m apple;n plate
{
    if(m==0||n==1)
     return 1;
    else if(n>m)
     return dp(m,m);
    else
     return dp(m-n,n)+dp(m,n-1);

}

int main()
{
cin>>m>>n;
cout<<dp(m,n)<<endl;

  return 0;
}
