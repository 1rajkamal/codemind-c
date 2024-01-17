#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    int k=n;
    int r=n*n;
    int p=0;
    while(r!=0)
    {
        s=r%10;
        p=p+s;
        r=r/10;
    }
    if(k==p)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}