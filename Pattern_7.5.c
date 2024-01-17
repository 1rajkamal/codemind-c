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
        for(k=i;k>=1;k--)
        {
            printf("%c ",'A'+m);
        }
        printf("
");
        m++;
    }
}