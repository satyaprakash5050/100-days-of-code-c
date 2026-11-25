// Q16: Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= b && a >= c)
        printf("%.10g\n", a);
    else if (b >= a && b >= c)
        printf("%.10g\n", b);
    else
        printf("%.10g\n", c);
    return 0;
}
