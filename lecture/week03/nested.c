#include <stdio.h>



int main() {
    int a = 10, b = -20, c = -30, d = 0;

    if (a < b) {
        if (b < c) { 
                d = 100;
    }   else {
        d = 400; // bu bloğa girmiyor çünkü b < c değil
    }
} // sonuç 0 çünkü a < b olmadığı için if bloğuna hiç girmiyor ve d'nin değeri değişmiyor

    printf("d = %d\n", d);

    char letter;
    int grade = 80;
    if (grade >= 90) {
        letter = 'A';
    } else if (grade >= 80) {
        letter = 'B';
    } else if (grade >= 70) {
        letter = 'C';
    } else {
        letter = 'F';
    }

    printf("Grade: %c\n", letter);

    

    return 0;
}