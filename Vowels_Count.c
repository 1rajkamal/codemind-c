#include <stdio.h>
#include <string.h>
int countVowels(char *str) {
    int count = 0;
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}
int main() {
    char input[100];
    fgets(input, sizeof(input), stdin);
    if (input[strlen(input) - 1] == '
') {
        input[strlen(input) - 1] = NULL;
    }
    int vowelCount = countVowels(input);
    printf("%d
", vowelCount);

    return 0;
}
