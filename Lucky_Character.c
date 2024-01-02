#include <stdio.h>
int main() {
    char luckyLetter;
    int count = 0;
    while (1) {
        char letter;
        scanf(" %c", &letter);
        if (letter == 'q') {
            printf("Exiting the program.
");
            break;
        }
        
        count++;
        
        if (count == 7) {
            luckyLetter = letter;
            printf("%c
", luckyLetter);
            break;
        }
    }
}
