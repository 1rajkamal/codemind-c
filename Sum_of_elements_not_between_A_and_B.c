#include <stdio.h>
int sumElementsNotBetween(int arr[], int size, int A, int B) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] < A || arr[i] > B) {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int A, B;
    scanf("%d %d", &A, &B);
    int result = sumElementsNotBetween(arr, size, A, B);
    printf("%d
",result);
    return 0;
}
