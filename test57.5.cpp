#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>

using namespace std;

#include <iostream>
#include <algorithm>
using namespace std;
#define mNum 2050
int kg[mNum];
int value[mNum][mNum];
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        for(int i=1;i<=n;i++)
            cin>>kg[i];

        //排序
        sort(kg+1,kg+1+n);

        //dp
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i/2;j++)
            {
                if(i==2*j)
                value[i][j] = value[i-2][j-1]+(kg[i]-kg[i-1])*(kg[i]-kg[i-1]);
                if(i>2*j)
                    value[i][j] = min(value[i-1][j],value[i-2][j-1]+(kg[i]-kg[i-1])*(kg[i]-kg[i-1]));
            }
        }

        cout<<value[n][k]<<endl;
    }
    return 0;
}
