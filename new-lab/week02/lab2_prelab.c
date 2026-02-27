#include <stdio.h>

/* Function declarations (prototypes) */
int calculateTotal(int unitPrice, int quantity);
void showTip(void);
float computeMean(int q1, int q2, int q3);

void tutorial1_basic_data_types(void) {
    int studentId = 42;
    float roomTemp = 23.5f;
    double eulerNumber = 2.71828;
    char section = 'C';

    printf("Tutorial 1 - Basic Data Types\n");
    printf("studentId=%d, roomTemp=%.1f, euler=%.5lf, section=%c\n\n",
           studentId, roomTemp, eulerNumber, section);
}

void tutorial2_declare_then_assign(void) {
    int pencils;
    int erasers;

    pencils = 14;
    erasers = 6;

    printf("Tutorial 2 - Declare Then Assign\n");
    printf("pencils=%d, erasers=%d\n\n", pencils, erasers);
}

void tutorial3_initialize_together(void) {
    int red = 11, green = 22, blue = 33;

    printf("Tutorial 3 - Initialize Together\n");
    printf("red=%d, green=%d, blue=%d\n\n", red, green, blue);
}

void tutorial4_arithmetic_demo(void) {
    int left = 14, right = 5;

    printf("Tutorial 4 - Arithmetic Operators\n");
    printf("left + right = %d\n", left + right);
    printf("left - right = %d\n", left - right);
    printf("left * right = %d\n", left * right);
    printf("left / right = %d\n", left / right); /* integer division */
    printf("left %% right = %d\n\n", left % right);
}

void tutorial5_comparison_demo(void) {
    int first = 12, second = 12;

    printf("Tutorial 5 - Relational Operators\n");
    printf("first > second  : %d\n", first > second);
    printf("first < second  : %d\n", first < second);
    printf("first == second : %d\n", first == second);
    printf("first != second : %d\n\n", first != second);
}

void tutorial6_logic_demo(void) {
    int isHoliday = 0;
    int finishedHomework = 1;

    printf("Tutorial 6 - Logical Operators\n");
    printf("(isHoliday == 1 && finishedHomework == 1) = %d\n",
           (isHoliday == 1 && finishedHomework == 1));
    printf("(isHoliday == 1 || finishedHomework == 1) = %d\n",
           (isHoliday == 1 || finishedHomework == 1));
    printf("!(finishedHomework == 1)                   = %d\n\n",
           !(finishedHomework == 1));
}

int calculateTotal(int unitPrice, int quantity) {
    return unitPrice * quantity;
}

void tutorial7_function_with_return_value(void) {
    int total = calculateTotal(7, 4);

    printf("Tutorial 7 - Function With Return Value\n");
    printf("calculateTotal(7, 4) = %d\n\n", total);
}

void showTip(void) {
    printf("Tip: Keep semicolons and braces consistent.\n");
}

void tutorial8_void_function_demo(void) {
    printf("Tutorial 8 - Void Function\n");
    showTip();
    printf("\n");
}

void tutorial9_update_operators(void) {
    int stock = 9;

    printf("Tutorial 9 - ++, -- and Compound Assignment\n");
    stock++;
    printf("After stock++ : %d\n", stock);
    stock--;
    printf("After stock-- : %d\n", stock);
    stock -= 3;
    printf("After stock-=3: %d\n\n", stock);
}

float computeMean(int q1, int q2, int q3) {
    return (q1 + q2 + q3) / 3.0f;
}

void tutorial10_combined_practice(void) {
    int quiz1 = 88, quiz2 = 76, quiz3 = 91;
    float mean = computeMean(quiz1, quiz2, quiz3);

    printf("Tutorial 10 - Combined Practice\n");
    printf("Quizzes: %d, %d, %d\n", quiz1, quiz2, quiz3);
    printf("Mean score: %.2f\n\n", mean);
}

int main(void) {
    tutorial1_basic_data_types();
    tutorial2_declare_then_assign();
    tutorial3_initialize_together();
    tutorial4_arithmetic_demo();
    tutorial5_comparison_demo();
    tutorial6_logic_demo();
    tutorial7_function_with_return_value();
    tutorial8_void_function_demo();
    tutorial9_update_operators();
    tutorial10_combined_practice();

    return 0;
}
