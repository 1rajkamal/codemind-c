#include <stdio.h>
int main() {
    int num, firstDigit, lastDigit, sum;
    scanf("%d", &num);
    lastDigit = num % 10;
    while (num >= 10) {
        num /= 10;
    }
    firstDigit = num;
    sum = firstDigit + lastDigit;
    printf("%d
", sum);
    return 0;
}
