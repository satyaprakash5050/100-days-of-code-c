// Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main(void) {
    double cp, sp;
    scanf("%lf %lf", &cp, &sp);
    if (cp <= 0) {
        printf("Invalid cost price\n");
    } else if (sp > cp) {
        printf("Profit: %.2f%%\n", (sp - cp) / cp * 100);
    } else if (sp < cp) {
        printf("Loss: %.2f%%\n", (cp - sp) / cp * 100);
    } else {
        printf("No profit, no loss\n");
    }
    return 0;
}
