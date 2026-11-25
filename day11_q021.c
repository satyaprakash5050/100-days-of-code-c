// Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include <stdio.h>

int main(void) {
    int m;
    scanf("%d", &m);
    const char *name = NULL;
    const char *days = NULL;
    switch (m) {
        case 1:  name = "January";   days = "31"; break;
        case 2:  name = "February";  days = "28 or 29"; break;
        case 3:  name = "March";     days = "31"; break;
        case 4:  name = "April";     days = "30"; break;
        case 5:  name = "May";       days = "31"; break;
        case 6:  name = "June";      days = "30"; break;
        case 7:  name = "July";      days = "31"; break;
        case 8:  name = "August";    days = "31"; break;
        case 9:  name = "September"; days = "30"; break;
        case 10: name = "October";   days = "31"; break;
        case 11: name = "November";  days = "30"; break;
        case 12: name = "December";  days = "31"; break;
        default: printf("Invalid month number\n"); return 0;
    }
    printf("%s has %s days\n", name, days);
    return 0;
}
