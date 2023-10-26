#include <stdio.h>

int main() {
    int year;
    scanf("%d", &year);
    int lastTwoDigits = year % 100;
    printf("%02d
", lastTwoDigits);
    return 0;
}
