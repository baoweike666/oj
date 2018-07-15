#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
#include<stdlib.h>
#include<queue>
#include<vector>
#include <algorithm>
using namespace std;

//hs_10000_p 2007-01-17 19:22:53,315 253.035(s)

class da{
public:
    string str1;
    int d1;
    int d2;
    int d3;
    int d4;
    int d5;
    int d6;
    int d7;
    double d;
};
da a[10000];

int main()
{
    char str1[100];
    char d1[100];
    char d2[100];
    char d3[100];
    char d4[100];
    char d5[100];
    char d6[100];
    char d7[100];
    char d[100];
sscanf("hs_10000_p 2007-01-17 19:22:53,315 253.035","%s %[^-]-%[^-]-%s %[^:]:%[^:]:%[^,],%s %s[^(](s)",str1,d1,d2,d3,d4,d5,d6,d7,d);
printf("%s %s %s %s %s %s %s %s %s\n",str1,d1,d2,d3,d4,d5,d6,d7,d);

int dd1=atoi(d1);
int dd2=atoi(d2);
int dd3=atoi(d3);
int dd4=atoi(d4);
int dd5=atoi(d5);
int dd6=atoi(d6);
int dd7=atoi(d7);
double dd=atof(d);
printf("%s %d %d %d %d %d %d %d %f",str1,dd1,dd2,dd3,dd4,dd5,dd6,dd7,dd);
    return 0;
}
