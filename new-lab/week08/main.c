#include <stdio.h>

// 3x3 image: 9 pixels, RGB
// Total: 27 integers
// Pixel i: indices [i*3], [i*3+1], [i*3+2] = R, G, B

void red_filter();
void relative_features();
void convert_gray();

void greetings() {
    int choice;

    printf("Welcome to the Number Games Machine! By using this machine you can do:\n");
    printf("1. Red Channel Image Filter\n");
    printf("2. Relative Features\n");
    printf("3. Convert Grayscale\n");
    printf("4. Exit\n");
    printf("Make your choice: ");
    scanf("%d", &choice);

    while (1) {
        if (choice == 1) {
            red_filter();
        } else if (choice == 2) {
            relative_features();
        } else if (choice == 3) {
            convert_gray();
        } else if (choice == 4) {
            printf("Goodbye!\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }

        printf("\nMake your choice: ");
        scanf("%d", &choice);
    }
}



void red_filter() {
    int width, height;
    int image[27]; // max 3x3

    printf("Enter the size of the image: ");
    scanf("%dx%d", &width, &height);

    int total_pixels = width * height;

    printf("Enter the RGB values of the image:\n");
    for (int i = 0; i < total_pixels; i++) {
        printf("Pixel %d (R G B): ", i + 1);
        scanf("%d %d %d", &image[i * 3], &image[i * 3 + 1], &image[i * 3 + 2]);
    }

    int half_start = (height / 2) * width; 

    for (int i = half_start; i < total_pixels; i++) {
        image[i * 3] = image[i * 3] / 2; // Half RED
    }

    printf("\nOutput image:\n");
    for (int i = 0; i < total_pixels; i++) {
        printf("(%d, %d, %d)\n", image[i * 3], image[i * 3 + 1], image[i * 3 + 2]);
    }
}




void relative_features() {
    int image[27];      // input: 3x3
    int result[12];     // output: 2x2 = 4 pixels
    int width = 3, height = 3;
    int total_pixels = width * height;

    printf("Enter the RGB values of the 3x3 image (output of red_filter):\n");
    for (int i = 0; i < total_pixels; i++) {
        printf("Pixel %d (R G B): ", i + 1);
        scanf("%d %d %d", &image[i * 3], &image[i * 3 + 1], &image[i * 3 + 2]);
    }

    //      Compare pixel pairs: 
    //      row 0 vs row 1 for columns 0 and 1
    //      row 1 vs row 2 for columns 0 and 1


    int result_idx = 0;

    for (int row = 0; row < height - 1; row++) {          // rows 0..1
        for (int col = 0; col < width - 1; col++) {       // cols 0..1
            int top    = (row * width + col) * 3;         // top pixel index
            int bottom = ((row + 1) * width + col) * 3;  // bottom pixel index

            int *chosen;
            if (image[top] >= image[bottom]) {
                chosen = &image[top];
            } else {
                chosen = &image[bottom];
            }

            result[result_idx * 3]     = chosen[0];
            result[result_idx * 3 + 1] = chosen[1];
            result[result_idx * 3 + 2] = chosen[2];
            result_idx++;
        }
    }

    printf("\nGenerated image:\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d, %d)\n", result[i * 3], result[i * 3 + 1], result[i * 3 + 2]);
    }
}




int is_divisible_by_9(int n) {
    if (n < 0) n = -n;

    while (n >= 10) {
        int digit_sum = 0;
        while (n > 0) {
            digit_sum += n % 10; 
            n /= 10;
        }
        n = digit_sum;
    }

    if (n == 0 || n == 9) {
        return 1;
    } else {
        return 0; 
    }
}





void convert_gray() {
    int image[12];
    int total_pixels = 4;
    int width = 2;

    printf("Enter the RGB values of the 2x2 image (output of relative_features):\n");
    for (int i = 0; i < total_pixels; i++) {
        printf("Pixel %d (R G B): ", i + 1);
        scanf("%d %d %d", &image[i * 3], &image[i * 3 + 1], &image[i * 3 + 2]);
    }

    int grayscale[4];

    printf("\n");
    for (int i = 0; i < total_pixels; i++) {
        int avg = (image[i * 3] + image[i * 3 + 1] + image[i * 3 + 2]) / 3;
        printf("Average of pixel %d: %d\n", i + 1, avg);
        grayscale[i] = is_divisible_by_9(avg);
    }

    printf("\nGenerated grayscale image\n");
    for (int i = 0; i < total_pixels; i++) {
        printf("%d ", grayscale[i]);
        if ((i + 1) % width == 0) printf("\n");
    }
}


int main() {
    greetings();
    return 0;
}