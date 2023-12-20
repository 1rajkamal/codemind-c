#include <stdio.h>
int main() {
    int num;
    while (1) {
        scanf("%d", &num);
        
        if (num == -1) {
            break;
        }
        printf("%d
", num * num);
    }
    return 0;
}
