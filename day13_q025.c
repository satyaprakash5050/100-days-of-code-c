// Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
// Input: number operator number   (e.g. 10 + 5)
#include <stdio.h>

int main(void) {
    double a, b;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+': printf("%.10g\n", a + b); break;
        case '-': printf("%.10g\n", a - b); break;
        case '*': printf("%.10g\n", a * b); break;
        case '/':
            if (b == 0)
                printf("Error: Division by zero is not allowed\n");
            else
                printf("%.2f\n", a / b);
            break;
        case '%':
            if ((int)b == 0)
                printf("Error: Division by zero is not allowed\n");
            else
                printf("%d\n", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
