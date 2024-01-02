#include <stdio.h>
int lastIndexLastOdd(int arr[], int size) {
    int lastIndex = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            lastIndex = i;
        }
    }

    return lastIndex;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int lastIndex = lastIndexLastOdd(arr, size);
    printf("%d
", lastIndex);
}
