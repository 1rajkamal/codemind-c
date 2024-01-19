#include<stdio.h>
int main()
{
    int n,r,a=0,b=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r = n%10;
        if(r%2==0)
        a++;
        else
        b++;
        n=n/10;
    }
    if(a>=1&&b==0)
    printf("Even");
    else if(b>=1&&a==0)
    printf("Odd");
    else
    printf("Mixed");
}