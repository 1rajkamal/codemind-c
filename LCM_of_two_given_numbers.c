#include <stdio.h>
int findGCD(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
unsigned long long findLCM(int num1, int num2) {
    unsigned long long lcm;
    lcm = (num1 * num2) / findGCD(num1, num2);
    return lcm;
}

int main() {
    int number1, number2;
    scanf("%d %d", &number1, &number2);
    unsigned long long lcm = findLCM(number1, number2);
    printf("%llu
",lcm);

    return 0;
}
