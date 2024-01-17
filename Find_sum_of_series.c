#include<stdio.h>
int main()
{
    float i,n,x=0;
    float sum=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        x+=(1.0)/i;
        sum=x;
    }
    printf("%.2f",sum);
}