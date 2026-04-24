#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int powerr(int a, int b) {
	int r = a;
	if (a == 1) return 1;
	if (b == 0) return 1;
	if (b == 1) return a;
	while (b > 1) {
		r = r * a;
		b--;
	} return r;
}

void foo(int n) {
	for (int i = 0; i < n; i++) {
		printf("  ");
	}
}

void print_pattern(int n) {
	for (int i = 1; i <= n; i++) {
		foo(i-1);
		printf("%d %d\n", powerr(2, i-1), powerr(2, i-1));
	}
	for (int j = n; j > 0; j--) {
		foo(j-1);
		printf("%d %d\n", powerr(2, j-1), powerr(2, j-1));
	}
}


int find_max(int arr[], int size) {
	int max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	} return max;
}

void find_second_max(int arr[], int size) {
	int main_max = find_max(arr, 10);
	printf("Main max: %d\n", main_max);
	int second_max = arr[0];
	for (int i = 0; i < 10; i++) {
		if (arr[i] > second_max && second_max < main_max) {
			second_max = arr[0];
		}
	} printf("Second max: %d\n", second_max);
}


int gaus_sum(int n) {
	if (n == 1) return 1;
	return n + gaus_sum(n-1);
}

int main(int argc, char *argv[]) {
	
	int n = 4;
	print_pattern(n);
	
	int arr[10] = {4, 9, -2, 50, 80, 90, 96, 74, 32, 6};
	
	printf("Max value: %d\n", find_max(arr, 10));
	find_second_max(arr, 10);
	
	printf("Gaus sum of 5: %d\n", gaus_sum(5));
	
	return 0;
}
