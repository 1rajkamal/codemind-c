#include<stdio.h>
int main()
{
    int N,i,c=0;
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        c=c+i;
    }
    printf("%d",c);
}