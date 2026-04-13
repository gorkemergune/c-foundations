#include <stdio.h>
#include <string.h>



int main() {

    char s[] = "Hello, World!";
    char *t;

    t = s; // strcpy(t, s);

    t[0] = 'R';  


    printf("%s\n", s);



    return 0;
}