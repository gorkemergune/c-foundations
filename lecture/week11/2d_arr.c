#include <stdio.h>


// writa a func that reverse a string wordwise
// "ab      cd   ef" -> "ef   cd      ab"

void wordwise_reverse(char *str) {
    char words[20][50]; // Assuming a maximum of 20 words and each word can be up to 50 characters long
    int i = 0, j = 0, word = 0;  // i = column, j = row
    while (str[i]) {
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            j++;
            i++;
            continue;
        }
        if (str[i] != ' ') {
            words[j][word++] = str[i];
        } else {
            words[j][word] = '\0'; // Null-terminate the word
            word = 0; // Reset word index for the next word
        }
        i++;
    }

    // Null-terminate the last word if it exists
    if (word > 0) {
        words[j][word] = '\0';
    }

    // Now we have all the words in the 2D array, we can reverse them
    char result[100]; // Assuming the final result will not exceed 100 characters
    int k = 0;
    for (int w = j; w >= 0; w--) {
        int l = 0;
        while (words[w][l]) {
            result[k++] = words[w][l++];
        }
        if (w > 0) { // Add space between words, but not after the last word
            result[k++] = ' ';
        }
    }
    result[k] = '\0'; // Null-terminate the result string

    // Copy the result back to the original string
    i = 0;
    while (result[i]) {
        str[i] = result[i];
        i++;
    }

    str[i] = '\0'; // Null-terminate the original string

    printf("Reversed string: %s\n", str);


}




int main() {

    char my_str[] = "ab      cd   ef";
    wordwise_reverse(my_str);




    return 0;
}