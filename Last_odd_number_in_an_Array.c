#include <stdio.h>
int lastOddNumber(int arr[], int size) {
    int lastOdd = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            lastOdd = arr[i];
        }
    }

    return lastOdd;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int lastOdd = lastOddNumber(arr, size);
    printf("%d
", lastOdd);
}
