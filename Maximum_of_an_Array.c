#include <stdio.h>
int main() {
    int N,i; 
    scanf("%d", &N);
    int array[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    int max = array[0];

    for (i = 1; i < N; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("%d
", max);

}
