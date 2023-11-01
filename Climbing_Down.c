#include <stdio.h>
int main() 
{
    int X,Y;
    int floorA,floorB;
    scanf("%d %d %d %d",&X,&Y,&floorA,&floorB);
    float timeWalter=(X*1.0)/floorA;
    float timeJesse=(Y*1.0)/floorB;
    if (timeWalter<timeJesse) 
    {
        printf("Walter
");
    } else if (timeJesse<timeWalter) 
    {
        printf("Jesse
");
    } else {
        printf("Both
");
    }
    return 0;
}
