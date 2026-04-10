#include <stdio.h>

int numeric(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0'; // Karakterden '0' karakterini çıkararak sayısal karşılığını buluruz
    } else {
        return -1;
    }
}

int to_Lower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32; // ASCII tablosunda büyük harf ile küçük harf arasında 32 fark vardır
    } else {
        return 0;
    }
}

int main() {

    char inputChar;
    int numericResult;
    char lowerResult;

    printf("Enter a character: ");
    scanf(" %c", &inputChar);

    numericResult = numeric(inputChar);

    if (numericResult >= 0 && numericResult <= 9) {
        printf("Numeric value of your char is: %d\n", numericResult);
    } else {
        // Eğer rakam değilse, to_Lower() fonksiyonunu dene
        lowerResult = to_Lower(inputChar);
        
        if (lowerResult != 0) {
            printf("Lowercase equivalent: '%c'\n", lowerResult);
        } else {
            printf("Neither a digit nor a capital letter!\n");
        }
    }

    return 0;
}

