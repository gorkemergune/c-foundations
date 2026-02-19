#include <stdio.h>
#include <string.h>

void welcome();
void arr_sum();
void divisible_five(int result_arr[], int arr_size);
void word_search();

int main() {
    welcome();
    return 0;
}

void welcome() {
    int choice = 0;
    while(choice != 4) {
        printf("Welcome to Labwork 6 Machine!\n");
        printf("By using this machine you can do:\n");
        printf("1. Array Summation\n");
        printf("2. Divisible by 5\n");
        printf("3. Word Search\n");
        printf("4. Exit\n");
        printf("Make your choice:\n");
        scanf("%d", &choice);

      switch (choice) {
          case 1: {
            arr_sum();
            break;
          }
          case 2: {
              int arr_size;
              printf("Enter the size: ");
              scanf("%d", &arr_size);
              int result_arr[arr_size];

              printf("Enter the values of array 1:");
              for (int i = 0; i < arr_size; i++) {
                  scanf("%d", &result_arr[i]);
              }
              printf("\n");

              divisible_five(result_arr, arr_size);
              break;
          }
          case 3: {
              word_search();
              break;
          }
          case 4:
              printf("Exiting Labwork 6 Machine. Goodbye!\n");
              break;
          default:
              printf("Invalid choice. Please enter a number between 1 and 4.\n");
        }
        printf("\n");
    }
}

void arr_sum() {
    int arr_size;
    printf("Enter the size: ");
    scanf("%d", &arr_size);

    int array_1[arr_size];
    int array_2[arr_size];
    int result_arr[arr_size];

    printf("Enter the values of array 1:");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &array_1[i]);
    }
    printf("\n");

    printf("Enter the values of array 2:");
    for (int i = 0; i < arr_size; i++) {
        scanf("%d", &array_2[i]);
    }
    printf("\n");

    for (int i = 0; i < arr_size; i++) {
      if (array_1[i] > array_2[i]) {
            result_arr[i] = array_1[i] + array_2[i];
        } else {
            result_arr[i] = array_2[i];
        }
    }

    printf("The result array is: ");
    for (int i = 0; i < arr_size; i++) {
        printf("%d ", result_arr[i]);
    }
    printf("\n");

}

void divisible_five(int result_arr[], int arr_size) {
    printf("The values divisible by 3 are:");

    for (int i = 0; i < arr_size; i++) {
        int number = result_arr[i];
        int last_digit = number - (number / 10)  * 10;

        if(last_digit == 0 || last_digit == 5) {
          printf(" %d", number);
        }
    }
    printf("\n");
}

void word_search() {

    char sentence[] = "a mischievous squirrel cleverly hid its biggest acorn beneath a pile of freshly fallen maple leaves";
    char word[] = "acorn";
    int sentence_len = strlen(sentence);
    int word_len = strlen(word);
    printf("%d %d", sentence_len, word_len);
    int found = 0;

    for (int i = 0; i <= sentence_len; i++) {
        int match = 0;
        for (int j = 0; j < word_len; j++) {
            if (sentence[i] == word[j]) {
                match = 1;
            }
            else{
              match = 0;
            }
        }
        if (match == 1) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Found!\n"); // [cite: 117]
    } else {
        printf("Not Found.\n");
    }
}
