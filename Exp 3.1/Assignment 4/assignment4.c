//4.	According to the gregorian calendar, it was Monday on the date 01/01/01. If Any year is input through the keyboard write a program to find out what is the day on 1st January of this year.Without loops

#include <stdio.h>
int main() {
    int year, day;
    printf("Enter a year: ");
    scanf("%d", &year);

    int years_passed = year - 1;
    int leap_years = years_passed / 4 - years_passed / 100 + years_passed / 400;
    int total_days = years_passed * 365 + leap_years;

    day = (total_days + 1) % 7; 

    switch(day) {
        case 0: printf("The day on 01/01/%d is Monday.\n", year); break;
        case 1: printf("The day on 01/01/%d is Tuesday.\n", year); break;
        case 2: printf("The day on 01/01/%d is Wednesday.\n", year); break;
        case 3: printf("The day on 01/01/%d is Thursday.\n", year); break;
        case 4: printf("The day on 01/01/%d is Friday.\n", year); break;
        case 5: printf("The day on 01/01/%d is Saturday.\n", year); break;
        case 6: printf("The day on 01/01/%d is Sunday.\n", year); break;
    }

    return 0;
}
