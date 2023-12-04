#include <stdio.h>
unsigned long long factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

int main() {
    int number;
    scanf("%d", &number);

    if (number < 0)
        printf("Factorial is not defined for negative numbers.
");
    else
        printf("%llu
",factorial(number));

    return 0;
}
