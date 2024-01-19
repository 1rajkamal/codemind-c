#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
   int a = m/60;
   int  b = m%60;
    printf("%d Hour(s) %d Minute(s)",a,b);
    return 0;
}