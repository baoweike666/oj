#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <math.h>
using namespace std;
int a[100];
int main() {

    int i,j,k1,k2,m,n;
    int ans=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1);
    
    for(i=1,j=n;i<j;)
    {

        if(a[i]+a[j]==m)
        {

            if (a[i] == a[j])
            {
                ans = ans + (j - i) * (j - i + 1) / 2;
                break;
            }
            else
            {
                k1 = i;
                k2 = j ;
                while (a[k1+1] == a[i])k1++;
                while (a[k2-1] == a[j])k2--;
                ans += (k1 - i + 1) * (k2 - j + 1);
                i=k1+1;
                j=k2-1;
            }
        }
        else if(a[i]+a[j]<m)i++;
        else if(a[i]+a[j]>m)j--;

    }

    cout<<ans;

    return 0;
}
