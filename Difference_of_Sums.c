#include <stdio.h>
unsigned long long int absDifference(int n) {
    unsigned long long int sumOfSquares = 0, squareOfSum = 0;
    for (int i = 1; i <= n; i++) {
        sumOfSquares += (unsigned long long int)i * i;
    }
    squareOfSum = (unsigned long long int)n * (n + 1) / 2; // Sum of first n natural numbers
    squareOfSum *= squareOfSum;
    if (sumOfSquares > squareOfSum) {
        return sumOfSquares - squareOfSum;
    } else {
        return squareOfSum - sumOfSquares;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    unsigned long long int difference = absDifference(n);

    printf("%llu
",  difference);

    return 0;
}
