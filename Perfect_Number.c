#include<stdio.h>
int main()
{
    int i,s=0,n;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s==n)
    printf("True");
    else
    printf("False");
}