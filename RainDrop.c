#include <stdio.h>
#include <string.h>
int main() {
    int number;
    char result[15]; 
    scanf("%d", &number);
    strcpy(result, "");
    if (number % 3 == 0) {
        strcat(result, "Pling");
    }
    if (number % 5 == 0) {
        strcat(result, "Plang");
    }
    if (number % 7 == 0) {
        strcat(result, "Plong");
    }
    if (strcmp(result, "") == 0) {
        sprintf(result, "%d", number);
    }
    printf("%s
", result);
}
