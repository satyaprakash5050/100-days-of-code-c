// Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>

#define PI 3.14159

int main(void) {
    double r;
    scanf("%lf", &r);
    printf("Area: %.2f\n", PI * r * r);
    printf("Circumference: %.2f\n", 2 * PI * r);
    return 0;
}
