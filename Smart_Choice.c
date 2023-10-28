#include<stdio.h>
int main ()
{
    int x,y,a,b;
    scanf("%d%d",&x,&y);
    a=1000-(x*2)+500-(x+y)*4;
    b=1000-(x+y)*2+500-y*4;
    if(a>b)
    {
        printf("%d",a);
    }
    else {
        printf("%d",b);
    }
}