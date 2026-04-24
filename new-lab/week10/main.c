#include <stdio.h>
#include <stdlib.h>

/* Algoritmik mantiklarini yazmaya calistim fakat biraz buglar mevcut.  */

void print_array(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d", arr[i]);
	} printf("\n");
}

int decimal_to_binary(int n) {
    int pal[10];
    int size = 0;

    while (n > 0) {
        pal[size++] = n % 2;
        n /= 2;
    }

    for (int i = 0; i < size / 2; i++) {
        if (pal[i] != pal[size - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int check_palindrome(int n) {
    int original = n, reversed = 0;

    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}

void palindrome() {
	int total = 0;
	int m = 1;
	while (total < 1000000) {
		if (decimal_to_binary(m) == 1 && check_palindrome(m) == 1) {
			total += m;
		} m++;
	} printf("The total sum: %d", total);
} 

int prime_control(int l) {
    if (l < 2) return 0;

    for (int i = 2; i * i <= l; i++) {
        if (l % i == 0) {
            return 0;
        }
    }
    return 1;
}

void is_prime(int arr[3][4]) {
    int prime_count, total;

    for (int i = 0; i < 3; i++) {
        prime_count = 0;
        total = 0;

        for (int j = 0; j < 4; j++) {
            total += arr[i][j];
            if (prime_control(arr[i][j])) {
                prime_count++;
            }
        }

        if (total % 2 == 0 && prime_count == 2) {
            printf("Perfect\n");
        } else {
            printf("Not Perfect\n");
        }
    }
}


void signal_puzzle() {
	int data[3][4] = { {2, 3, 4, 6}, {10, 7, 5, 2}, {4, 11, 8, 13}};
	is_prime(data);
	
}





void removing_digits() {
    int num_list[] = {8, 7, 2, 1, 8, 7};
    int player = 1;
    int al;

    while (1) {
        printf("Enter the digit: ");
        scanf("%d", &al);

        for (int i = 0; i < 6; i++) {
            if (al == num_list[i]) {
                num_list[i] = -1;
                break;
            }
        }

        int count = 0;
        for (int j = 0; j < 6; j++) {
            if (num_list[j] == -1) {
                count++;
            }
        }

        if (count == 6) {
            printf("Winner %d. Player\n", player);
            break;
        }

        player = (player == 1) ? 2 : 1;
    }
}




void greetings() {
	int choice;
	while(1) {
		printf("Welcome to the Number Games Machine! By using this machine: \n");
		printf("1. Double-way Palindrome\n");
		printf("2. Signal Puzzle\n");
		printf("3. Removing Digits\n");
		printf("4. Exit");
		printf("Make your choice: ");
		scanf("%d", &choice);
		
		if (choice == 1) {
			//palindrome();
		} else if (choice == 2) {
			
		} else if (choice == 3) {
			removing_digits();
		} else if (choice == 4) {
			printf("Exiting...\n");
			break;
		} else {
			printf("Invalid choice. \n");
		}	
	}
	
}




int main(int argc, char *argv[]) {
	
	// 46 - 23 - 11 - 5 - 2 - 1 - 0 -->   101 110
	int data[3][4] = { {2, 3, 4, 6}, {10, 7, 5, 2}, {4, 11, 8, 13}, {4, 11, 8, 13} };	
	
	greetings();
	return 0;
}
