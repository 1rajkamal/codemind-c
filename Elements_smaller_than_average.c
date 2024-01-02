#include <stdio.h>
float calculateAverage(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return (float)sum / size;
}
int countElementsSmallerOrEqual(int arr[], int size) {
    float average = calculateAverage(arr, size);
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] <= average) {
            count++;
        }
    }
    return count;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int result = countElementsSmallerOrEqual(arr, size);
    printf("%d
", result);

    return 0;
}
