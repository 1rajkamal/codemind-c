#include <stdio.h>
int countDigits(int number) {
    int count = 0;
    if (number == 0) {
        return 1;
    }
    while (number != 0) {
        count++;
        number = number / 10;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);

    int totalDigits = countDigits(num);

    printf("%d
", totalDigits);

    return 0;
}
