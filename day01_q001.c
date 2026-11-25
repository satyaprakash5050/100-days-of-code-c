// Q1: Write a program to input two numbers and display their sum.
#include <stdio.h>

int main(void) {
    double a, b;
    scanf("%lf %lf", &a, &b);
    printf("%.10g\n", a + b);
    return 0;
}
