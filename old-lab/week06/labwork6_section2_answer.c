#include <stdio.h>

#define ALPHABET_SIZE 26

char sentence[] = "silent shadows waltz with the moons gentle glow painting poetry upon the canvas of the night"; //Size 91
int count[ALPHABET_SIZE] = {0};
char alphabet[ALPHABET_SIZE] = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};

void welcome();
void increment_letter(char letter_array[], int count_array[], char letter, int increment_value);
void count_letter(char letter_array[], char given_string[], int count_array[]);
void most_frequent(char letter_array[], int count_array[]);
void prime_occur(char letter_array[], int count_array[]);
int is_prime(int n);


int main() {

    welcome();

    return 0;
}

int is_prime(int n) {
    if (n <= 1) {
      return 0;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void welcome() {
    int choice = 0;
    while(choice != 5) {
        printf("Welcome to the Letter Count Machine! By using this machine you can do:\n");
        printf("1. Increment Letter\n");
        printf("2. Count Letter\n");
        printf("3. Find Most Frequent Letter\n");
        printf("4. Display Prime Occurrences (Bonus)\n");
        printf("5. Exit\n");
        printf("Make your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                char letter;
                int value;
                printf("Enter the letter: ");
                scanf(" %c", &letter);

                printf("Enter increment value: ");
                scanf("%d", &value);
                increment_letter(alphabet, count, letter, value);
                break;
            }
            case 2:
                count_letter(alphabet, sentence, count);
                break;
            case 3:
                most_frequent(alphabet, count);
                break;
            case 4:
                prime_occur(alphabet, count);
                break;
            case 5:
                printf("Exiting the Letter Count Machine. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
        printf("\n");
    }
}

void increment_letter(char letter_array[], int count_array[], char letter, int increment_value) {
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (letter_array[i] == letter) {
            count_array[i] += increment_value;
            break;
        }
    }

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count_array[i] > 0) {
            printf("%c - %d\n", letter_array[i], count_array[i]);
        }
    }
}

void count_letter(char letter_array[], char given_string[], int count_array[]) {

    for (int i = 0; given_string[i] != '\0'; i++) {
        char current_char = given_string[i];
        for (int j = 0; j < ALPHABET_SIZE; j++) {
            if (letter_array[j] == current_char) {
                count_array[j]++;
                break;
            }
        }
    }

    printf("Letter Occurrence Count:\n"); // [cite: 42]
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if (count_array[i] > 0) {
            printf("%c: %d\n", letter_array[i], count_array[i]);
        }
    }
}

void most_frequent(char letter_array[], int count_array[]) {
    int max = count_array[0];
    int index = 0;
    for (int i = 0; i < ALPHABET_SIZE - 1; i++) {
        if(count_array[i] > max) {
          max = count_array[i];
          index = i;
        }
    }

    printf("%c - %d times\n", letter_array[index], count_array[index]);
}

void prime_occur(char letter_array[], int count_array[]) {
    printf("Prime Occurrences:\n"); // [cite: 71]

    for (int i = 0; i < ALPHABET_SIZE; i++) {
        if(is_prime(count_array[i])) {
            printf("%c: %d\n", letter_array[i], count_array[i]);
        }
    }
}
