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
long long dp1[1001][1001];
long long dp2[1001][1001];
long long a[1001];

int main() {
  long long n;
  long long k,d;
  long long ans=-10000000000;
  cin>>n;
  for(long long i=1;i<=n;i++)
  {
      cin>>a[i];
  }
  cin>>k;
  cin>>d;

  for(long long i=1;i<=n;i++)
  {dp1[i][1]=a[i];dp2[i][1]=a[i];}

  for(long long i=1;i<=n;i++)
  {
     for(long long j=2;j<=k;j++)
         for(long long t=1;t<=d;t++)
         if(i-t>=1)
         {
             dp1[i][j]=max(max(dp1[i-t][j-1]*a[i],dp2[i-t][j-1]*a[i]),dp1[i][j]);//以i结尾的序列里取j个
             dp2[i][j]=min(min(dp2[i-t][j-1]*a[i],dp1[i-t][j-1]*a[i]),dp2[i][j]);//以i结尾的序列里取j个
         }
     ans=max(ans,dp1[i][k]);
  }
  cout<<ans;
  return 0;
}
