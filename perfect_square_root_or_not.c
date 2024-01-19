#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);

    int m = sqrt(n);
    if(m*m==n)
    printf("True");
    else
    printf("False");
    
}