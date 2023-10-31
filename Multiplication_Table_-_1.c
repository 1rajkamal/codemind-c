#include<stdio.h>
int main()
{
    int a,N,b;
    scanf("%d",&N);
    for(a=1;a<=12;a++)
    {
        b=N*a;
        printf("%d x %d = %d
",N,a,b);
    }
}