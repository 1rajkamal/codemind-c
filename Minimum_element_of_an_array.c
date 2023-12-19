#include <stdio.h>
int main() {
    int N,i; 
    scanf("%d", &N);
    int array[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }
    int min = array[0];

    for (i = 1; i < N; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    printf("%d
", min);

}
