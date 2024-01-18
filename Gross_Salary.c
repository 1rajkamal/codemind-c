#include<stdio.h>
int main()
{ 
    int b;
   
    scanf("%d",&b);
    if(b<=10000)    
    printf("%.2f",b+(0.8*b)+(0.2*b));
    else if(b<=20000)
    printf("%.2f",b+(0.9*b)+(0.25*b));
    else 
    printf("%.2f",b+(0.95*b)+(0.3*b));
    return 0;
}