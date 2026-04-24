#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int str_len_p(char *p) {
	int q = 0;
	while (p[q]) {
		q++;
	} return q;
}

void print_string_p(char *p) {
		while (*p) {
		printf("%c", *p);
		p = p + 1;
	}
}

void pointer_string_printer() {	
	char s1[20] = "Systems";
	char s2[20] = "Programming";
	
	print_string_p(s1); printf("(length: %d)", str_len_p(s1));
	printf("\n");
	print_string_p(s2); printf("(length: %d)", str_len_p(s2));
}


int char_count_p(char *s, char c) {
	int count = 0;
	while (*s) {
		if (*s == c) {
			count++;
		} s = s + 1;
	} return count;
}

void character_counter() {
	char str[30] = "programming";
	printf("Count 'g' --> %d\n", char_count_p(str, 'g'));
	printf("Count 'r' --> %d\n", char_count_p(str, 'r'));
	printf("Count 'z' --> %d", char_count_p(str, 'z'));
}


void str_cpy_p(char *dest, const char *src) {
	while (*src) {
		*dest = *src;
		dest++;
		src++;
	} *dest = '\0';
} 

void safe_string_copy() {
	char original[20] = "hello";
	char copy[20];
	str_cpy_p(original, copy);
	printf("Original: %s\n", original);
	printf("Copy: %s\n", copy);
}  


void longest_shortest_month() {
	char month[12][10] = {
		"January", "February", "March", "April", "May", "June",
		"July", "August", "September", "October", "November", "December"
	};
	int longest_index = 0;
	int shortest_index = 0;
	int max_len = str_len_p(month[0]);
	int min_len = str_len_p(month[0]);

	for (int i = 1; i < 12; i++) {
		int len = str_len_p(month[i]);
		if (len > max_len) {
			max_len = len;
			longest_index = i;
		}
		if (len < min_len) {
			min_len = len;
			shortest_index = i;
		}
	}
	printf("Longest month: %s (length: %d)\n", month[longest_index], max_len);
	printf("Shortest month: %s (length: %d)\n", month[shortest_index], min_len);
}



void to_upper_p(char *s) {
	while (*s) {
		if (*s >= 'a' && *s <= 'z') {
			*s = *s - 32;
		} s++;
	} 
}


void uppercase_converter() {
	char str[30] = "Hello World 123";
	to_upper_p(str);
	printf("Uppercase: %s\n", str);
}



void str_cat_p(char *dest, const char *src) {
	while(*dest) dest++;
	while(*src) {
		*dest = *src;
		src++;
	}  *dest = '\0';
}

void broken_str_cat_p() {
	char s1[30] = "Good";
	char s2[10] = "Morning";
	str_cat_p(s1, s2);
	printf("%s %s\n", s1, s2);
}


void str_cpy_rev_p(char *dest, char *src) {
	char *p = src;
	while (*p) p++; // src'nin eleman sayisini verdi
	p--;
	while (p >= src) {
		*dest = *p;
		p--;
		dest++;
	}
	*dest = '\0';	
}

void broken_str_cpy_rev_p() {
	char s1[20] = "abcde";
	char s2[20] = "";
	str_cpy_rev_p(s2, s1);
	printf("s1: \"%s\"\n", s1);
	printf("s2: \"%s\"\n", s2);	
}



int is_palindrome_p(char *s) {
	char *left = s;
	char *right = s;
	while (*right) right++;
	while (left < right) {
		if (*left == *right) return 0;
		left++;
		right--;
	} return 1;
}

void broken_is_palindrome_p() {
	printf( "madam: %d\n", is_palindrome_p( "madam" ) );
	printf( "hello: %d\n", is_palindrome_p( "hello" ) );
	printf( "racecar: %d\n", is_palindrome_p( "racecar" ) );
}



int str_starts_with_p(char *str, char *prefix) {
	while (*prefix) {
		if (*str != *prefix) return 0;
		str++;
		prefix++;
	} return 1;
}

void broken_str_starts_with_p() {
	printf( "Hello World starts with Hello? %d\n", str_starts_with_p( "Hello World", "Hello" ) );
	printf( "Hello World starts with World? %d\n", str_starts_with_p( "Hello World", "World" ) );
	printf( "abc starts with abcdef? %d\n", str_starts_with_p( "abc", "abcdef" ) );
}



char *last_char_p(char *s, char c) {
	char *p = s;
	while(*p) p++;
	while (p >= s) {
		if (*p == c) return p;
		p--;
	} return 0;
}

void broken_last_char_p() {
	char str[20] = "banana";
	char *result;
	
	result = last_char_p( str, 'a' );
	if( result ) printf( "Last 'a' at position %d\n", (int)(result - str) );
	else printf( "'a' not found\n" );
	
	result = last_char_p( str, 'z' );
	if( result ) printf( "Last 'z' at position %d\n", (int)(result - str) );
	else printf( "'z' not found\n" );
}


int main(int argc, char *argv[]) {
	
	printf("Q1: \n");
	pointer_string_printer(); // oldu
	
	printf("\n\nQ2: \n");
	character_counter(); // oldu
	
	printf("\n\nQ3: \n");
	safe_string_copy(); // buglu tam olmadi
	
	printf("\n\nQ4: \n");
	longest_shortest_month(); // olmadi
	
	printf("\n\nQ5: \n");
	uppercase_converter(); // oldu
		
	printf("\n\nQ6: \n");
	broken_str_cat_p(); // oldu
	
	printf("\n\nQ7: \n");
	broken_str_cpy_rev_p(); // oldu
	
	printf("\n\nQ8: \n");
	broken_is_palindrome_p(); // oldu
	
	printf("\n\nQ9: \n");
	broken_str_starts_with_p(); // oldu
	
	printf("\n\nQ10: \n");
	broken_last_char_p(); // oldu

	
	return 0;
}
