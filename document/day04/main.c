#include <stdio.h>

int main() {

int myArr[] = {5,10,15,20,25,30};
printf("%d\n", myArr[0]); // 5
myArr[2] = 33;
// new list {5,10,33,20,25,30}

int myNumbers[4];
// Add elements
myNumbers[0] = 25;
myNumbers[1] = 50;
myNumbers[2] = 75;
myNumbers[3] = 100;
// myNumbers[] = {25,50,75,100}

printf("Total byte: %zu\n", sizeof(myArr)); // Integer element = 2 - 4 byte // Prints 24
int length = sizeof(myArr) / sizeof(myArr[0]); // Numbers of element * Byte / Byte = Length
printf("Total elemnt: %d\n", length);  // Prints 6

int myNums[] = {1, 2, 3, 25, 50, 51, 55};
int len = sizeof(myNums) / sizeof(myNums[0]);
int i;
for (i = 0; i < len; i++) {
    printf("%d\n", myNums[i]);
}

int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
float avg, sum = 0;
int m;
int len2 = sizeof(ages) / sizeof(ages[0]);
for (m = 0; m < length; m++) {
    sum += ages[m];
}
avg = sum / len2;
printf("The average age is: %.2f\n", avg);

int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
// 2x3 matrix

char greet[] = "Helloooooo";
printf("%s\n", greet);

char carName[] = "Volvo";
int len3 = sizeof(carName) / sizeof(carName[0]);
int a;
for (a = 0; a < len3; ++a) {
    printf("%c\n", carName[a]);
}

#include <string.h>

char txt[] = "We are the so-called \"Vikings\" from the north.";
// We are the so-called "Vikings" from the north.
char txt2[] = "It\'s alright.";
// It's alright.
char txt3[] = "The character \\ is called backslash.";
// The character \ is called backslash

char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alphabet));   // 26
printf("%zu\n", sizeof(alphabet));   // 27

char alpha[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
printf("%zu\n", strlen(alpha));   // 26
printf("%zu\n", sizeof(alpha));   // 50

int getNum;
printf("Type a number: \n");
scanf("%d", &getNum);
printf("Your number is: %d\n", getNum);

char firstName[30];
printf("Enter your first name: \n");
scanf("%s", firstName);
printf("Hello %s\n", firstName);

return 0;



}