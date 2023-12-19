#include <stdio.h>

int main() {
    int N,i,average; 
    scanf("%d", &N);

    int array[N];
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (i = 0; i < N; i++) {
        sum += array[i];
    }
    average = (float)sum / (float) N;
    int averageExists = 0;
    for (i = 0; i < N; i++) {
        if (array[i] == average) {
            averageExists = 1;
            break;
        }
    }

    if (averageExists==1) {
        printf("True");
    } else {
        printf("False");
    }
}
