#include <stdio.h>
int main() {
    int hurlFactor,spinFactor,speedFactor;
    int grade;
    scanf("%d",&hurlFactor);
    scanf("%d",&spinFactor);
    scanf("%d",&speedFactor);
    if(hurlFactor>50&&spinFactor>60 && speedFactor > 100) {
        grade=10;
    } else if(hurlFactor>50 && spinFactor>60) {
        grade=9;
    } else if(spinFactor>60 && speedFactor>100) {
        grade=8;
    } else if(hurlFactor>50 && speedFactor>100) {
        grade=7;
    } else if(hurlFactor>50 || spinFactor>60 || speedFactor > 100) {
        grade=6;
    } else {
        grade=5;
    }
    printf("%d
",grade);
}
