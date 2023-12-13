#include <stdio.h>

int main() {
    int n,i,j,k,num;
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            printf(" ");
        }
        int num = n- i;
        for (k = 0; k <= i; k++) {
            printf("%d ", num++);
        }
        printf("
");
    }
}
