#include<stdio.h>
int main()
{
    int i,j,k,n,m=0;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<i;k++)
        {
            printf("%c ",'A'+m);
        }
        m++;
        printf("
");
    }
}