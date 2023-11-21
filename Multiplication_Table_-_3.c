#include<stdio.h>
int main()
{
    int N,A,B,i,c;
    scanf("%d%d%d",&N,&A,&B);
    for(i=A;i<=B;i++)
    {
       c=N*i;
       printf("%d x %d = %d
",N,i,c);
    }
}