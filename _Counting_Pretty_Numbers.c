#include<stdio.h>
int main()
{
    int n,j,i,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b;
        int z = 0;
        scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++)
        {
            
            r = j%10;
            if(r==2||r==3||r==9)
            ++z;
        }
        printf("%d
",z);
    }
}