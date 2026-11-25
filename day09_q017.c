// Q17: Write a program to find the roots of a quadratic equation and categorize them.
// Input: a b c   |   Compile with: gcc file.c -o file -lm
#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        if (b == 0)
            printf("Not a valid equation\n");
        else
            printf("Linear equation, root: %.2f\n", -c / b + 0.0);
        return 0;
    }

    double d = b * b - 4 * a * c;
    if (d > 0) {
        printf("Real and distinct roots\n");
        printf("Root 1: %.2f\n", (-b + sqrt(d)) / (2 * a) + 0.0);
        printf("Root 2: %.2f\n", (-b - sqrt(d)) / (2 * a) + 0.0);
    } else if (d == 0) {
        printf("Real and equal roots\n");
        printf("Root 1 = Root 2 = %.2f\n", -b / (2 * a) + 0.0);
    } else {
        double re = -b / (2 * a) + 0.0;
        double im = fabs(sqrt(-d) / (2 * a));
        printf("Complex roots\n");
        printf("Root 1: %.2f + %.2fi\n", re, im);
        printf("Root 2: %.2f - %.2fi\n", re, im);
    }
    return 0;
}
