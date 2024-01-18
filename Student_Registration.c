#include<stdio.h>
int main()
{
    int m,n,k,t,i,s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
    scanf("%d %d %d",&n,&m,&k);
    s=m-k;
    if(s>=n)
    printf("YES
");
    else
    printf("NO
");
}
}