#include <stdio.h>

//1. Reverse the array
void reverse_array(int rev_arr[], int rev_size) {
  int temp;
  for(int i=0; i < rev_size/2; i++) {
    temp = rev_arr[i];
    rev_arr[i] = rev_arr[rev_size-1-i];
    rev_arr[rev_size-1-i] = temp;
  }
  printf("Reversed Version in Function: ");
  for(int i = 0; i < rev_size; i++) {
    printf("%d ", rev_arr[i]);
  }
  printf("\n");
}

//2. Check whether two array are equal to each other
int arrays_equal(int eq1[], int eq2[], int eq_size) {
  for(int i = 0; i < eq_size; i++) {
    if(eq1[i] != eq2[i]) {
      return 0;
    }
  }
  return 1;
}

//3. Swap operation with pointers
void swap(int *x, int *y) {
  int temp = *x;
  *x = *y;
  *y = temp;
}

//4. Print temprature chart
void print_temperature_chart(int temps[], int size) {
  for(int i = 0; i < size; i++) {
    printf("Day %d: ", i + 1);
    for(int j = 0; j < temps[i]; j++) {
      printf("*");
    }
    printf("\n");
  }
}

//5. Convert a binary number to decimal
int binary_to_decimal(int binary[]) {
  int dec_num = 0;
  for(int i=1; i <= 8; i++) { //Trace each digit
    if(binary[8-i] == 1) { // Check the binary digit from right to left (index 7 down to 0)
      int pow_two = 1;
      for(int counter = 1; counter < i; counter++) {
        pow_two *= 2;
      }
      dec_num += pow_two;
    }
  }
  return dec_num;
}

int main() {

  //Reverse array
  int rev_size;
  printf("Enter the size of a reverse array: ");
  scanf("%d", &rev_size);
  int rev_arr[rev_size];
  printf("Enter reverse array numbers: ");
  for(int i = 0; i < rev_size; i++) {
    scanf("%d", &rev_arr[i]);
  }
  reverse_array(rev_arr, rev_size);

  printf("Reversed Version in Main: ");
  for(int i = 0; i < rev_size; i++) {
    printf("%d ", rev_arr[i]);
  }
  printf("\n");

  //Check equal
  int eq1[3] = {10, 20, 30};
	int eq2[3] = {10, 20, 30};
	int eq_size = 3;
	printf("%d\n",arrays_equal(eq1, eq2 ,eq_size));

  //Swap operation with pointer
  int x, y;
  printf("Enter x and y values: ");
  scanf("%d %d", &x, &y);
  swap(&x, &y);
  printf("After swap: X = %d and Y = %d\n", x, y);

  //Temperature chart - Nested Loops
  int temps[3] = {3, 5, 2};
  print_temperature_chart(temps, 3);

  //Binary to Decimal
  int binary[8];
  printf("Enter a 8 bit binary number: ");
  for(int i = 0; i < 8; i++) {
    scanf("%d", &binary[i]);
  }
  printf("Decimal: %d", binary_to_decimal(binary));

  return 0;
}
