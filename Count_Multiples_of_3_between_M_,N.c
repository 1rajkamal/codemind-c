#include<stdio.h>
int main()
{
    int m,n,r=0,i;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%3==0)
        r++;
    }
    printf("%d",r);
    return 0;
}