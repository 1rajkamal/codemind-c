#include<stdio.h>
int main()
{
    int i,n,c=0,b=0,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=c+a[i];
    }
    k = c/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>=k)
        ++b;
    }
    printf("%d",b);
}