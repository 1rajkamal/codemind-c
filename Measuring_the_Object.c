#include <stdio.h>

int main() {
    int W, X, Y, Z;
    scanf("%d", &W);
    scanf("%d", &X);
    scanf("%d", &Y);
    scanf("%d", &Z);
    int possible = 0;
    if (W == X || W == Y || W == Z) {
        possible = 1;
    }
    if (X + Y == W || X + Z == W || Y + Z == W || X + Y + Z == W) {
        possible = 1;
    }
    if (possible) {
        printf("YES
");
    } else {
        printf("NO
");
    }

    return 0;
}