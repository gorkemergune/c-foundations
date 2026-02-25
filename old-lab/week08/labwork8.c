#include <stdio.h>
#include <string.h>

//1. Traverse and print each element
void print_array(int *arr, int size) {
  for(int i = 0; i < size; i++) {
    printf("%d ", *arr);
    arr++;
  }
  printf("\n");
}

//2. Summation all elements
int summation(int *arr, int size) {
  int sum = 0;
  for(int i = 0; i < size; i++) {
    sum += *arr;
    arr++;
  }
  return sum;
}

//3. Print an array in reverse order
int reverse_traverse(int *arr, int size) {
  int *last_point = arr + size - 1;
  for(int i = 0; i < size; i++) {
    printf("%d ", *last_point);
    last_point--;
  }
  printf("\n");
}

//4. Print string
void print_string(char *str) {
  while(*str != '\0') {
    printf("%c ", *str);
    str++;
  }
  printf("\n");
}

//5. Letter count
int letter_count(char *str, char letter) {
  int count = 0;
  while(*str != '\0') {
    if(*str == letter) {
      count++;
    }
    str++;
  }
  return count;
}

int main() {
  int arr1[10] = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18};
  print_array(arr1, 10);

  int numbers[7] = {10, 20, 30, 40, 50, 60, 70};
  printf("Sum: %d\n", summation(numbers, 7));

  reverse_traverse(numbers, 7);

  char str1[] = "HelloWorld!";
  print_string(str1);
  printf("Letter count: %d\n", letter_count(str1, 'o'));
  return 0;
}
