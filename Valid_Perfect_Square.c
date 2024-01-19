#include<stdio.h>
#include<math.h>
int main()
{
    int t,n,i,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        d = sqrt(n);
        if(d*d==n)
        printf("True
");
        else
        printf("False
");
    }
}