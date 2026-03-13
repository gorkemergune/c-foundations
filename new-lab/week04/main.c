#include <stdio.h>
#include <stdlib.h>

void example1_print_n_to_0() {
	int n;
	printf("Enter n: "); scanf("%d", &n);
	while (n >= 0){
		printf("%d, ", n);
		n--;
	}
}


void example2_sum_off_odds() {
	int n, sum = 0;
	printf("Enter n: "); scanf("%d", &n);
	for (int i = 0; i <= n; i++){
		if (i % 2 != 0)	{
			sum += i;
		}
	} printf("%d", sum);
}


void example3_print_multiples() {
	int a, b, k;
	printf("Enter a, b, k: "); scanf("%d%d%d", &a, &b, &k);
	for (a; a <= b; a++) {
		if (a % k == 0) {
			printf("%d, ", a);
		}
	}
}


void example4_sentinel_total_and_count() {
	int n;
	printf("Enter n: "); scanf("%d", &n);
	int total = n;
	int count = 1;
	while(n > 0) {
		printf("Enter n: "); scanf("%d", &n);
		total += n;
		count++;
	} printf("Total: %d, Count: %d", total, count);
}


void example5_square_pattern() {
	int n;
	printf("Enter n: "); scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("#");
		} printf("\n");
	}
	
}


void example6_broken_range_printer() {
	int a, b, i;
 	printf("Enter a, b: "); scanf("%d%d", &a, &b);
 	i = a;
 	while(i <= b) {
	 	printf("%d ", i);
 		i++;
	}
	printf("\n");
}


void example7_broken_average_loop() {
	int sum = 0, count = 0, n, num;
	printf("Enter n: "); scanf("%d", &n);
	while (n > 0) {
		printf("Enter num: "); scanf("%d", &num);
		count++;
		sum += num;
		n--;
	}printf("Average: %d", sum/count);
}


void example8_broken_number_triangle() {
	int n, i = 1, j;
	printf("Enter n: "); scanf("%d", &n);
 	while(i <= n) {
 		j = 0;
 		while(j < i) {
 		printf("%d ", i);
 		j++;
		} 
		printf("\n");
		i++;		
	}
}


char grade_letter(int grade) {
	if(grade >= 90) return 'A';
	else if(grade >= 80) return 'B';
	else if(grade >= 70) return 'C';
 	else return 'F';
}
void example9_broken_grade_letter_loop() {
 	int n, i = 1, g;
 	printf("Enter n: "); scanf("%d", &n);
 	while(i <= n) {
 		printf("Enter grade: "); scanf("%d", &g);
 		printf("%c\n", grade_letter(g));
 		i++;
 	}
}


void print_n_symbols(int n, char ch) {
	int i = 0;
 	while(i < n) {
 		printf("%c", ch);
 		i++;
 	}
}
void example10_broken_symbol_frame() {
	int h, left = 0, right;
	printf("Enter h: "); scanf("%d", &h);
 	right = h - 2;
 	printf("*"); print_n_symbols(right, ' '); printf("*\n");
 	right--;
 	while(right >= 0) {
 	printf("*"); print_n_symbols(left, ' ');
 	printf("*"); print_n_symbols(right, ' '); printf("*\n");
 	left++;
 	right--;
 	}
	printf("*"); print_n_symbols(right, ' '); printf("*\n");
}


int main(int argc, char *argv[]) {
	
	printf("Q1\n");
	example1_print_n_to_0();
	printf("\n\n\n");
	
	printf("Q2\n");
	example2_sum_off_odds();
	printf("\n\n\n");
	
	printf("Q3\n");
	example3_print_multiples();
	printf("\n\n\n");
		
	printf("Q4\n");
	example4_sentinel_total_and_count();
	printf("\n\n\n");
	
	printf("Q5\n");
	example5_square_pattern();
	printf("\n\n\n");	
	
	printf("Q6\n");
	example6_broken_range_printer();
	printf("\n\n\n");
	
	printf("Q7\n");
	example7_broken_average_loop();
	printf("\n\n\n");
	
	printf("Q8\n");
	example8_broken_number_triangle();
	printf("\n\n\n");
	
	printf("Q9\n");
	example9_broken_grade_letter_loop();
	printf("\n\n\n");
		
	printf("Q10\n");
	example10_broken_symbol_frame();
	printf("\n\n\n");
	
	return 0;
}
