#include <stdio.h>
int main() {
    int physics, chemistry, biology, mathematics, computerScience;
    float totalMarks = 500.0;
    float percentage;
    char grade;
    scanf("%d",&physics);
    scanf("%d",&chemistry);
    scanf("%d",&biology);
    scanf("%d",&mathematics);
    scanf("%d",&computerScience);
    percentage = ((physics + chemistry + biology + mathematics + computerScience) / totalMarks) * 100;
    if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else if (percentage >= 40) {
        grade = 'E';
    } else {
        grade = 'F';
    }
    printf("Grade %c
", grade);
    return 0;
}
