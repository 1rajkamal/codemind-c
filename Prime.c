#include <stdio.h>
#include <stdbool.h>
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true; 
}

int main() {
    int num;
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("Prime
", num);
    } else {
        printf("Not Prime
", num);
    }
}
