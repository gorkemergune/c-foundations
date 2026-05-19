#include <stdio.h>


typedef struct {

    int id;
    char name[20];
    int midterms[2];
    int final;
    double avg;
    char letter;


} student;


void print_student(student s) {
    printf("ID: %d\n", s.id);
    printf("Name: %s\n", s.name);
    printf("Midterm 1: %d\n", s.midterms[0]);
    printf("Midterm 2: %d\n", s.midterms[1]);
    printf("Final: %d\n", s.final);
    printf("Average: %.2f\n", s.avg);
    printf("Letter Grade: %c\n", s.letter);
}


int main() {
    
    int x;
    student y = {
        123, 
        "Alice", 
        {90, 95}, 
        92, 
        0.0,
        ' '
        };

    y.avg = (y.midterms[0] + y.midterms[1] + y.final) / 3.0;
    if (y.avg >= 90) {
        y.letter = 'A';
    } else if (y.avg >= 80) {
        y.letter = 'B';
    } else if (y.avg >= 70) {
        y.letter = 'C';
    } else if (y.avg >= 60) {
        y.letter = 'D';
    } else {
        y.letter = 'F';
    }

    print_student(y);
    
    

    return 0;
}