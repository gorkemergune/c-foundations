#include <stdio.h>
#define SENTINEL -1



int main() {

    int count = 0, grade, sum = 0;

    do {
        printf("Enter a grade: ");
        scanf("%d", &grade);

        if (grade != SENTINEL) 
            sum += grade;
            count++;
        
        } while (grade != SENTINEL);
        if (count) printf("Average: %.2f\n", (double)sum / count); else printf("No grades.\n");





    return 0;
}