#include <stdio.h>

//3. Declare swap function
void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
  printf("Inside the function:\n x = %d and y = %d\n", x, y);
}

//5. If example
int drug_A(int age) {
  int a;
  if(age < 18) {
    a = 25;
  }
  else if ((age >= 18) && (age < 65)) {
    a = 45;
  }
  else {
    a = 30;
  }
  return a;
}

int drug_B(int age) {
  if(age < 18) {
    return 2 * drug_A(age);
  }
  else if ((age >= 18) && (age < 65)) {
    return 5 * drug_A(age);
  }
  else {
    return 3 - drug_A(age);
  }
}

float drug_C(int age, char gender) {
  float X;
  switch(gender) {
    case 'M': X = drug_A(age) / 2.0; break;
    case 'F': X = drug_A(age) / 3.0; break;
    default: X = 0; break;
  }

  if(age < 18) {
    return 30 + drug_B(age) - 1.5 * X;
  }
  else if ((age >= 18) && (age < 65)) {
    return 40 + (2*drug_B(age)) - (3*X);
  }
  else {
    return 35 + drug_B(age) - 2.5 * X;
  }
}

int main() {
   //1. Increment and decrement operations
   int apple = 5;
   int cherry = 6;
   printf("Increased apple number: %d\n", apple + 1); //apple++;
   printf("Decreased cherry number: %d\n", cherry - 1); //cherry--;

   //2. Function scopes with swap operations
   int x;
   int y;
   printf("Enter x: ");
   scanf("%d", &x);
   printf("Enter y: ");
   scanf("%d", &y);
   //4. Call swap function
   swap(x, y);
   printf("Inside the main: \n x = %d and y = %d\n", x, y);

   //5. If example
   int age;
   char gender;
   printf("Enter your age: ");
   scanf("%d", &age);
   printf("Enter your gender: ");
   scanf(" %c", &gender);
   printf("Drug A: %d\n", drug_A(age));
   printf("Drug B: %d\n", drug_B(age));
   printf("Drug C: %lf\n", drug_C(age, gender));

   int i = 0;
   while (i < 10) {
     printf("i: %d", i);
     i = i + 1;
   }

   return 0;
}
