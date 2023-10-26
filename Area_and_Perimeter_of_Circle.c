#include<stdio.h>
int main()
{
    double area,perimeter,radius;
    scanf("%lf",&radius);
    area=3.14*radius*radius;
    perimeter=2*3.14*radius;
    printf("%.2lf
""%.2lf
",area,perimeter);
}