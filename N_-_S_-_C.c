#include<stdio.h>
int main()
{
    int i,j,k,m,n;
    scanf("%d %d",&m,&n);
    for(i=m+1;i<n;i++)
    {
        j=i*i;
        k=i*i*i;
        printf("%d %d %d
",i,j,k);
    }
}