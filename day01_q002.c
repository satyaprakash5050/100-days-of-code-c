// Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
// Division by zero should be handled carefully.
#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("Sum: %.10g\n", a + b);
    printf("Difference: %.10g\n", a - b);
    printf("Product: %.10g\n", a * b);
    if (b != 0)
        printf("Quotient: %.2f\n", a / b);
    else
        printf("Quotient: Division by zero is not allowed\n");
    return 0;
}
