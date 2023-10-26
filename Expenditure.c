#include <stdio.h>
int main() 
{
    int X,Y;
    int totalDays=30;
    scanf("%d%d",&X,&Y);
    int totalSpent = Y*totalDays;
    if(X>=totalSpent) 
    {
        printf("YES");
    } else {
        printf("NO");
    }
}
