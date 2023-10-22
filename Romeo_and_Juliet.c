#include <stdio.h>

int main() {
    int X, Y;       
    int Z;          
    int totalMoney;
    int maxChocolates;
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    totalMoney = (5 * X) + (10 * Y);
    maxChocolates = totalMoney / Z;
    printf("%d
", maxChocolates);

    return 0;
}
