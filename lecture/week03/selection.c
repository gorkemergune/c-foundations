#include <stdio.h>

int main() {

    int a,b = 10;
    a = (b > 0) * 3   +  (b <= 0) * 5; // if statement
    printf("%d\n", a);

    int c = 40;
    if (30 > c && c >= 20) {
        a = 111;
    } else if (40 > c && c >= 30) {
        a = 222;
    } else if (50 > c && c >= 40) {
        a = 333;
    } else {
        a = 444;
    }
    printf("%d\n", a);

    if (30 > c || c >= 20) {
        a = 111;
    } else if (40 > c || c >= 30) {
        a = 222;
    } else if (50 > c || c >= 40) {
        a = 333;
    } else {
        a = 444;
    }
    printf("%d\n", a); 


    
    return 0;
}