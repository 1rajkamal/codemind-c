#include<stdio.h>
int main()
{
    int a=0,b=1,c=0,i,x;
    scanf("%d",&x);
    while(c<x)
    {
        c=a+b;
        a=b;
        b=c;
    }
    if(c==x)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}