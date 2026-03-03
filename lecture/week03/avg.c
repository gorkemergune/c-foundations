#include <stdio.h>

int main() {

    int count = 0, grade, sum = 0;

    printf("Enter 1st grade: ");
    scanf("%d", &grade);

    while(grade >= 0) {
        sum += grade;
        count++;

        printf("Enter next grade (negative to stop): ");
        scanf("%d", &grade);
    }
    printf("Average grade: %.2f\n", (float)sum / count);

    return 0;
}