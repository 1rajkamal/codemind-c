#include <stdio.h>
int sumOfDivisors(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num) {
                sum += i;
                sum += num / i;
            } else {
                sum += i;
            }
        }
    }

    return sum;
}
int isAmicable(int num) {
    int sum1 = sumOfDivisors(num);
    int sum2 = sumOfDivisors(sum1);
    return (num == sum2 && sum1 != sum2);
}
int main() {
    int number;
    scanf("%d", &number);

    if (isAmicable(number))
        printf("Amicable
", number);
    else
        printf("Not Amicable
", number);

    return 0;
}
