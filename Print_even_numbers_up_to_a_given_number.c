#include <stdio.h>
void printEvenNumbers(int A, int B) {
    if (A % 2 != 0) {
        A++; 
    }

    
    for (int i = A; i <= B; i += 2) {
        printf("%d ", i);
    }
}

int main() {
    int numA, numB;
    scanf("%d %d", &numA, &numB);

    printEvenNumbers(numA, numB);

    return 0;
}
