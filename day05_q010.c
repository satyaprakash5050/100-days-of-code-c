// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>

int main(void) {
    int total;
    scanf("%d", &total);
    int h = total / 3600;
    int m = (total % 3600) / 60;
    int s = total % 60;
    printf("%02d:%02d:%02d\n", h, m, s);
    return 0;
}
