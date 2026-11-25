// Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include <stdio.h>

int main(void) {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a)
        printf("Not a valid triangle\n");
    else if (a == b && b == c)
        printf("Equilateral\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles\n");
    else
        printf("Scalene\n");
    return 0;
}
