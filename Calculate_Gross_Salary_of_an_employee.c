#include <stdio.h>
int main() 
{
    float basicSalary, hra, da, pf, grossSalary;
    scanf("%f",&basicSalary);
    scanf("%f",&hra);
    scanf("%f",&da);
    pf=0.12*basicSalary;
    grossSalary=basicSalary+hra+da+pf;
    printf("%.2f
",pf);
    printf("%.2f
",grossSalary);
    return 0;
}
