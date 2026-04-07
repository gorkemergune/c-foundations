#include <stdio.h>


double f1(double principal, double rate) {
    return principal * (rate / 100);
}

double f2(double principal, double rate) {
    double R1 = f1(principal, rate);
    double new_amount = R1 + principal;
    return new_amount * (rate / 100);
}


double f3(double principal, double rate) {
    double R1 = f1(principal, rate);
    double new_amount = R1 + principal;
    double R2 = f2(principal, rate);
    new_amount += R2;
    return new_amount * (rate / 100);
}




int main() {
int num_months;
double principal, rate;


// R1 = principal * (rate / 100)
// new_amount = R1 + principal
// R2 = new_amount * (rate / 100)
// new_amount = R2 + new_amount
// R3 = new_amount * (rate / 100) 

printf("Enter number of years: "); scanf("%d", &num_months);
if (num_months == 1) {
    printf("Enter principal: "); scanf("%lf", &principal);
    printf("Enter rate: "); scanf("%lf", &rate);
    double R1 = f1(principal, rate);
    printf("R1 = %.2lf\n", R1);
}
else if (num_months == 2) {
    printf("Enter principal: "); scanf("%lf", &principal);
    printf("Enter rate: "); scanf("%lf", &rate);
    double R2 = f2(principal, rate);
    printf("R2 = %.2lf\n", R2);
}
else if (num_months == 3) {
    printf("Enter principal: "); scanf("%lf", &principal);
    printf("Enter rate: "); scanf("%lf", &rate);
    double R3 = f3(principal, rate);
    printf("R3 = %.2lf\n", R3);
}






return 0;
}