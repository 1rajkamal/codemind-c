#include<stdio.h>
int main()
{
    int r,n,s,p=1,a=0;
    scanf("%d",&n);
    while(n>0)
    {
        r = n%10;
        a=a+r;
        p=p*r;
        n=n/10;
    }
    s= p-a;
    {
        printf("%d",s);
    }
}