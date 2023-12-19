#include <stdio.h>
int main() {
    int N,i;
    scanf("%d", &N);
    int array[N]; 
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0; 
    for (i = 0; i < N; i++) {
        if (array[i] % 2 != 0) {
            sum += array[i];
        }
    }
    printf("%d
", sum);
}
