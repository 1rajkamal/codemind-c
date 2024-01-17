#include<stdio.h>
int main()
{
    int i,j=0,m,n;
    scanf("%d %d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i%2==0&&i%3==0)
        j++;
    }
    printf("%d",j);
}