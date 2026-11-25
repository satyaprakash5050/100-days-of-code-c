// Q6: Write a program to swap two numbers using a third variable.
#include <stdio.h>

int main(void) {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}
