#include <stdio.h>

void task1_count_up() {
    int n, i = 1;
    printf("Read n: "); scanf("%d", &n);
    while (i <= n) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}

void task2_sum_1_to_n() {
    int n, sum = 0, i = 1;
    printf("Read n: "); scanf("%d", &n);
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("Sum from 1 to %d is %d\n", n, sum);
}

void task3_even_between() {
    int a, b, i;
    printf("Read a and b: "); scanf("%d %d", &a, &b);
    if (a % 2 != 0) a++;
    while (a <= b) {
        printf("%d ", a);
        a += 2;
    }
    printf("\n");
}

void task4_grade_average_sentinel() {
    int grade, sum = 0, count = 0;
    do {
        printf("Read grade (negative to stop): "); scanf("%d", &grade);
        if (grade >= 0) {
            sum += grade;
            count++;
        }
    } while (grade >= 0);

    if (count > 0) {
        printf("Average grade: %.2f\n", (double)sum / count);
    } else {
        printf("No grades entered.\n");
    }
}

void task5_nested_pattern() {
    int n, i, j;
    printf("Read n: "); scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}



int main() {

    task1_count_up();  
    task2_sum_1_to_n();    
    task3_even_between();    
    task4_grade_average_sentinel();    
    task5_nested_pattern();

    return 0;
}