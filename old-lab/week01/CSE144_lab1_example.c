#include <stdio.h> //1. Include a library

//9. Function declaration
void population_print() {
   printf("There are 45 students in this class!\n");
}

//11. Taking input from user inside the function
void population_can_change() {
   int population;
   scanf("Enter the population of the class: %d", &population);
   printf("There are %d student in this class\n", population);
}

//12. Population value comes from main
void population_from_main(int population) {
   printf("There are %d student in this class!\n", population);
}

//13. Function that has a return type
int triangle_area(int height, int base) {
   int area = height * base;
   return area;
}

int main() { //2. main() function
   //3. Declare variables
   int apple = 5;
   float height = 1.80;
   char first_letter = 'A';

   //4. printf() and scanf() functions
   int length;
   int width;
   printf("Hello World!\n"); //5. printf() function → display on terminal
   printf("Enter the length and width of a rectangle: ");
   scanf("%d %d", &length, &width); //6. scanf() function + placeholders (%d, %f, %c) + address of (&)
   int area = length * width; //8. Arithmetic Operations (+, -, *, /), % modulo
   printf("The area of a given rectangle is: %d\n\n", area); //7. printf() with placeholder

   //10. Calling a function
   population_print();
   population_can_change();

   int population;
   printf("Enter the student number in the class: ");
   scanf("%d", &population);
   population_from_main(population);

   return 0;
}
