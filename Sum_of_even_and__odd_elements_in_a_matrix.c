#include<stdio.h>
int main()
{
    int i,j,m,n,e=0,o=0;
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==0)
            e = e+a[i][j];
            else
            o = o+a[i][j];
        }
    }
    printf("%d %d",e,o);
}

        