#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
#include<vector>
#include<stack>
#include<map>
#include<queue>
#include<deque>
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<ctime>
#include<functional>
using namespace std;

int a[1001];

void rs(int *a,int st,int ed)
{
    int n=ed-st+1;
    int tmp;
    for(int i=0;i<=n/2-1;i++)
    {
        tmp= a[st+i];
        a[st+i]=a[ed-i];
        a[ed-i]=tmp;
    }
}
int findmax(int *a,int st,int ed )
{
    int max=0;
    int i,k;
    for(i=st;i<=ed;i++)
    {
        if(a[i]>=max&&i==ed){max=a[i];k=i;continue;}
        if(a[i]>=max&&i==1){max=a[i];k=i;continue;}
        if(a[i]>max){max=a[i];k=i;}
    }
    return k;
}
int main()
{
    int n,k,loc;
    int ans=0;
    int st;
    cin>>n;
    loc=n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }

    while(loc!=1)
    {
        k=findmax(a,1,loc);
        if(k==loc){loc--;continue;}
        else if(k==1)
        {
           rs(a,1,loc);
           loc--;
           ans++;
           continue;
        }
        else
        {
            rs(a,1,k);
            rs(a,1,loc);
            ans=ans+2;
            loc--;
        }
    }
    cout<<ans<<endl;
    //for(int i=1;i<=n;i++)cout<<a[i]<<" ";

    return 0;
}
