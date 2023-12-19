#include <stdio.h>
int isInArray(int arr[], int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);
    int array[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &array[i]);
    }

    int element;
    scanf("%d", &element);
    if (isInArray(array, N, element)) {
        printf("True");
    } else {
        printf("False");
    }
}
