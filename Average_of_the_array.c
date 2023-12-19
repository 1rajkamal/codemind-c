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
        sum += array[i];
    }
    float average = (float)sum / N;
    printf("%.2f
", average);
}
