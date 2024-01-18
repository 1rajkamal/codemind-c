#include<stdio.h>
int main()
{
    int i,j,m,n,t,c=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&t);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(t==a[i][j])
            ++c;
        }
    }
    if(c==1)
    printf("1");
    else
    printf("0");
}