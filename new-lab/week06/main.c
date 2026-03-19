#include <stdio.h>
#include <stdlib.h>

void draw_number_pattern();
void second_largest();
void rotate_array();
void convert_to_binary();
void greeting();

void greeting() {
	int state = 1;
	int choice;
	while (state == 1) {
		printf("\nWelcome to the Number Games Machine! By using this machine you can do: \n1. Draw Number Pattern \n2. Find Second Largest \n3. Rotate Array \n4. Convert to Binary \n5. Exit \nMake your choice: "); scanf("%d", &choice);

		if (choice == 1) {
			draw_number_pattern();
		} else if (choice == 2) {
			second_largest();
		} else if (choice == 3) {
			rotate_array();
		} else if (choice == 4) { 
			convert_to_binary();
		} else if (choice == 5) {
			break;
		} else {
			greeting();
		}
	}
}


void draw_number_pattern() {
	int n, c = 0; // n = 7, m = 3 
	printf("Enter the number for pattern: "); scanf("%d", &n);
	int m = n/2;
	
	for (int i = 0; i < m; i++) {
		for (int j = m-i; j > 0; j--) {
			printf(" ");
		}printf("%d\n", n);
	} 
	printf("%d\n", n);
	for (int i = 0; i < m; i++) {
		for (int j = 0 ; j < i+1; j++) {
			printf(" ");
		}printf("%d\n", n);
	} 
}


void second_largest() {
	int size, n;
	printf("Enter size: "); scanf("%d", &size);
	int numbers[size];
	printf("Enter numbers: "); 
	for (int i = 0; i < size; i++) {
		scanf("%d", &n);
		numbers[i] = n;
	} 
	int max = numbers[0];
	int second = numbers[0]; // 12 15 9 0 -2 19 25 90 95
	for (int i = 0; i < size; i++) {
		if (numbers[i] > max) {
			second = max;
			max = numbers[i];
		} else if (numbers[i] < max && numbers[i] > second) {
			second = numbers[i];
		}
	}printf("Second largest element: %d", second);
}



void convert_to_binary() {
	int n;
	printf("Enter binary: "); scanf("%d", &n);
	int arr[8];
	for (int i = 7; i >= 0; i--) {
		arr[i] = n % 2;
		n = n / 2;
	} for (int i = 0; i < 8; i++) {
		printf("%d", arr[i]);
	} printf("\n");
} 


void rotate_array() {
	int size, n, shift;
	printf("Enter size: "); scanf("%d", &size);
	printf("Enter shift: "); scanf("%d", &shift);
	int arr[size];
	printf("Enter numbers: "); 
	for (int i = 0; i < size; i++) {
		scanf("%d", &n);
		arr[i] = n;
	} 
//shift = 2, size - shift = 3
	for (int i = shift; i < size; i++) {
		printf("%d", arr[i]);
	} for (int i = 0; i < shift; i++) {
		printf("%d", arr[i]);
	}
}





int main(int argc, char *argv[]) {
	
	greeting();
	
	
	
	return 0;
}
