// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
// Input: dd/mm/yyyy (works for every month, e.g. 15/04/2025 -> 15-Apr-2025)
#include <stdio.h>

int main(void) {
    int d, m, y;
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    scanf("%d/%d/%d", &d, &m, &y);
    if (m < 1 || m > 12) {
        printf("Invalid date\n");
        return 0;
    }
    printf("%02d-%s-%04d\n", d, months[m - 1], y);
    return 0;
}
