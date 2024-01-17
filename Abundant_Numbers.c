#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int s=0;
    int k=n;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s=s+i;
    }
    if(s>k)
    printf("True");
    else
    printf("False");
}