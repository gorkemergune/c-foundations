#include <stdio.h>

int main() {

int i = 10;
while (i > 0) {
    if (i % 2 == 0) {
        printf("%d is even\n", i);
    }   else {
        printf("%d is odd\n", i);
    }
    i--;
}

int k = 1;
do {
    printf("k is %d\n", k);
    k++;
} while (k < 5);

int numbers = 12345;
int revNumbers = 0;
while (numbers != 0) {
    revNumbers = revNumbers * 10 + numbers % 10;
    numbers /= 10;
printf("number: %d and revNumber: %d\n", numbers, revNumbers);
}

int sum = 0;
int m;
for (m = 1; m <= 5; m++) {
    sum = sum + m;
}
printf("Sum is %d\n", sum);

int p, r;
for (p = 1; p <= 3; p++) {
    for (r = 1; r <= 3; r++) {
        printf("%d ", p * r);
    }
    printf("\n");
}

printf("---------\n");

int number = 2;
int s;
for (s = 1; s <= 10; s++) {
  printf("%d x %d = %d\n", number, s, number * s);
}

int j;

for (j = 0; j < 6; j++) {
    if (j == 2) {
        continue;
    }
    if (j == 4) {
        break;
    }
    printf("%d\n", j);
}

return 0;
}
