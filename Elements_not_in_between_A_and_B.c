#include<stdio.h>
int main()
{
    int n,i,a,b,c=0;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    scanf("%d %d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(v[i]<a||v[i]>b)
        {
            printf("%d ",v[i]);
            ++c;
        }
    }
    if(c==0)
    printf("-1");
}