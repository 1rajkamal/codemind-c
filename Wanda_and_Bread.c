#include <stdio.h>
int main() {
    int N,M,K;
    scanf("%d %d %d", &N, &M, &K);
    int totalDaysNeeded = (N + K - 1) / K; 
    if (totalDaysNeeded <= M) {
        printf("YES
"); 
    } else {
        printf("NO
"); 
    }
}