#include <stdio.h>
int main() {
    int num, digit, sum = 0;
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10; 
        sum += digit;   
        num /= 10;          
    }
    printf("%d
", sum);

}
