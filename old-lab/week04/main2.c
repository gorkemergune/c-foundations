#include  <stdio.h>

int calculate_dates(int d1, int m1, int y1, int d2, int m2, int y2) {
    int total1 = 365 * y1 + 31 * m1 + d1;
    int total2 = 365 * y2 + 31 * m2 + d2;
    if (total1 > total2) {
        return total1 - total2;
    } else {
        return total2 - total1;
    }
}



void guess_weather(int c){
    if (c < 0) {
        printf("Freezing cold!\n");
    } else if (0 <= c && c <= 10) {
        printf("Very cold!\n");
    } else if (11 <= c && c <= 20) {
        printf("Chilly!\n");
    } else if (21 <= c && c <= 30) {
        printf("Hot!\n");
    } else if (30 < c) {
        printf("Hot!\n");
    }
}


/* 
1
12
123
1234
12345
1234
123
12
1*/

void up_triangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void down_triangle(int n) {
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}

void triangle(int n) {
    up_triangle(n);
    down_triangle(n - 1);
}



void phone_number(long long num, char del) {
    // 5483920919 --> 548-392-09-19
    int d1 = num / 1000000000; // 5
    int d2 = (num / 100000000) % 10; // 4
    int d3 = (num / 10000000) % 10; // 8
    int d4 = (num / 1000000) % 10; // 3
    int d5 = (num / 100000) % 10; // 9
    int d6 = (num / 10000) % 10; // 2
    int d7 = (num / 1000) % 10; // 0
    int d8 = (num / 100) % 10; // 9
    int d9 = (num / 10) % 10; // 1
    int d10 = num % 10; //9

    printf("%d %d %d %c %d %d %d %c %d %d %c %d %d \n", d1, d2, d3, del, d4, d5, d6, del, d7, d8, del, d9, d10);
}



void greatest_common_divisor(int a, int b) {
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    printf("The GCD is : %d\n", a);
}


int main() {

    int d1, m1, y1, d2, m2, y2;
    printf("Enter first date: ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter second date: ");
    scanf("%d %d %d", &d2, &m2, &y2);
    printf("Day number: = %d\n",     calculate_dates(d1, m1, y1, d2, m2, y2));

    int c;
    printf("Enter the temperature: ");
    scanf("%d", &c);
    guess_weather(c);

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    triangle(n);

    long long num;
    char del;
    printf("Enter a phone number in given form (5XXXXXXXXX) : ");
    scanf("%lld", &num);
    printf("Enter the delimiter: ");
    scanf(" %c", &del);
    phone_number(num, del);

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    greatest_common_divisor(a, b);

    return 0;
}