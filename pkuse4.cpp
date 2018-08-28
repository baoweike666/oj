#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<cstring>
#include<cmath>
using namespace std;

char a[5];
char ans[5];
int t;
char str[1001];
int s[1001];
int n;


int main()
{

    int i;
    int i1,i2,i3,i4,i5;
    cin>>t>>str;
    while(t!=0&&strcmp(str,"END")!=0)
    {
        n=strlen(str);
        strcpy(ans,"AAAAA");
        for(i=0;i<strlen(str);i++)
        {
            s[i+1]=str[i]-64;
        }



        for(i1=n;i1>=1;i1--)
            for(i2=n;i2>=1;i2--)
                for(i3=n;i3>=1;i3--)
                    for(i4=n;i4>=1;i4--)
                        for(i5=n;i5>=1;i5--)
                        {
                            if(i1==i2||i1==i3||i1==i4||i1==i5)continue;
                            if(i2==i3||i2==i4||i2==i5)continue;
                            if(i3==i4||i3==i5||i4==i5)continue;
                            if(int(s[i1]-pow(s[i2],2)+pow(s[i3],3)-pow(s[i4],4)+pow(s[i5],5))==t)
                            {
                                a[0]=s[i1]+64;
                                a[1]=s[i2]+64;
                                a[2]=s[i3]+64;
                                a[3]=s[i4]+64;
                                a[4]=s[i5]+64;
                                if(strcmp(a,ans)>0)
                                {
                                    memset(ans, '\0', sizeof(ans));
                                    strcpy(ans,a);
                                }
                                ans[5]='\0';
                            }
                        }

        if(strcmp(ans,"AAAAA")==0)cout<<"no solution"<<endl;
        else
            cout<<ans<<endl;
        cin>>t>>str;
    }
    return 0;
}
