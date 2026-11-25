// Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main(void) {
    double length, breadth;
    scanf("%lf %lf", &length, &breadth);
    printf("Area: %.2f\n", length * breadth);
    printf("Perimeter: %.2f\n", 2 * (length + breadth));
    return 0;
}
