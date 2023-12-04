#include <stdio.h>

int isPalindrome(int num) {
    int reversedNum = 0, remainder, originalNum;

    originalNum = num;

    while (num > 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    if (originalNum == reversedNum)
        return 1; // It's a palindrome
    else
        return 0; // It's not a palindrome
}

int main() {
    int number;
    scanf("%d", &number);

    if (isPalindrome(number))
        printf("True
", number);
    else
        printf("False
", number);

    return 0;
}
