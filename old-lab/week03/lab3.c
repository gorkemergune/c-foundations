#include <stdio.h>

int summation_without_loop(int four_digit_number) {
  //3. Without summation_loop
  int fourth_digit = four_digit_number % 10;
  four_digit_number = four_digit_number / 10;
  int third_digit = four_digit_number % 10;
  four_digit_number = four_digit_number / 10;
  int second_digit = four_digit_number % 10;
  int first_digit = four_digit_number / 10;
  int sum = first_digit + second_digit + third_digit + fourth_digit;
  return sum;
}

int summation_with_loop(int four_digit_number) {
  //4. With loop
  int sum = 0;
  int digit = 0;
  int digit_counter = 4;
  while(digit_counter > 0) {
    digit = four_digit_number % 10;
    printf("Digit %d: %d\n", digit_counter, digit);
    sum = sum + digit;
    four_digit_number = four_digit_number / 10;
    digit_counter = digit_counter - 1;
  }
  return sum;
}

//5. Count the digit number
int digit_number(int number) {
  int digit_counter = 0;
  while(number != 0) {
    digit_counter++;
    number = number / 10;
    printf("Digit Counter: %d, Number: %d\n", digit_counter, number);
  }
  return digit_counter;
}

//6. Summation without specification of digit number
int summation(int number, int digit_number) {
  int sum = 0;
  for(int i = digit_number; i > 0; i--) {
    int digit = number % 10;
    sum = sum + digit;
    printf("Digit: %d, Sum: %d\n", digit, sum);
    number = number / 10;
  }
  return sum;
}

//7. MIN finding
int min_(int first, int second, int third) {
  int min;
  if((first < second) && (first < third)){
    min = first;
  }
  else if((second < third) && (second < first)) {
    min = second;
  }
  else {
    min = third;
  }
  return min;
}

//8. Odd / Even detection
int is_odd(int number) {
  if(number % 2 != 0) {
    return 1;
  }
  else {
    return 0;
  }
}

//9. Until sum is above 200 take inputs from the user and return the average of those numbers
float average_above_200() {
  float sum = 0;
  int number_count = 0;
  int num;
  while(sum < 200) {
    printf("Enter number: ");
    scanf("%d", &num);
    sum += num;
    number_count++;
  }
  float average = sum / number_count;
  return average;
}

int main() {

  //1. While loop definition: Show square of numbers from 1 to 10
  printf("WHILE LOOP: \n");
  int number = 1;
  while(number <= 10) {
    printf("%d ", number*number);
    number++;
  }
  printf("\n");

  //2. FOR loop definition:
  printf("FOR LOOP: \n");
  for(int i = 1; i <= 10; i++) {
    printf("%d ", i*i);
  }
  printf("\n");

  //Summation of digits
  int four_digit_number;
  printf("Enter four digit number: ");
  scanf("%d", &four_digit_number);
  printf("Without loop: %d\n", summation_without_loop(four_digit_number));
  printf("With loop: %d\n", summation_with_loop(four_digit_number));

  //Determine the digit numbers
  int input_number;
  printf("Enter number: ");
  scanf("%d", &input_number);
  int digits = digit_number(input_number);
  printf("Digit number of a given number: %d \n", digits);
  printf("Summation: \n");
  summation(input_number, digits);

  //Min determination
  int first, second, third;
  printf("Enter three numbers: ");
  scanf("%d %d %d", &first, &second, &third);
  printf("The minimum of these numbers is %d\n", min_(first, second, third));

  //Check the number is even/odd
  int check = is_odd(four_digit_number);
  switch(check) {
    case 1:
      printf("The given four digit number is odd!\n");
      break;
    case 0:
     printf("The given four digit number is even!\n");
     break;
    default:
      break;
  }

  //Take input until the sum of them above 200
  float avg = average_above_200();
  printf("Average of given numbers is %f\n", avg);
  return 0;
}
