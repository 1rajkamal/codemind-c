#include<stdio.h>
#include<math.h>
int main()
{
    int seconds,hours,minutes,remaining_seconds;
    scanf("%d",&seconds);
    hours=seconds/3600;
    seconds=seconds%3600;
    minutes=seconds/60;
    remaining_seconds=seconds%60;
    printf("H:M:S-%d:%d:%d",hours,minutes,remaining_seconds);
    return 0;
}