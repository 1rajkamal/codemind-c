#include <stdio.h>
int countWords(char *str) {
    int wordCount = 0;
    int inWord = 0; 
    while (*str) {
        if (*str == ' ' || *str == '
' || *str == '	') {
            inWord = 0;
        }
        else if (inWord == 0) {
            inWord = 1;
            wordCount++;
        }
        str++;
    }
    
    return wordCount;
}
int main() {
    char inputString[1000];
    fgets(inputString, sizeof(inputString), stdin);
    int totalWords = countWords(inputString);
    printf("%d
", totalWords);
}
