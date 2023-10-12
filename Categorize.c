#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<150)
    {
        printf("The person is Dwarf.");
    }
    else if(n>150 && n<=165)
    {
        printf("The person is average heighted.");
    }
    else if(n>165 && n<=195)
    {
        printf("The person is taller.");
    }
    else
    {
        printf("Abnormal height.");
    }
}