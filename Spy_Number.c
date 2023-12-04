#include <stdio.h>
int isSpyNumber(int num) {
    int sum = 0, product = 1, digit;
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }
    return (sum == product);
}
int main() {
    int number;
    scanf("%d", &number);
    if (isSpyNumber(number))
        printf("Spy Number
", number);
    else
        printf("Not Spy Number
", number);

    return 0;
}
