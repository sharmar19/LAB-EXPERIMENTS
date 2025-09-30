#include <stdio.h>

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int year, days = 0;
    printf("Enter a year: ");
    scanf("%d", &year);
    
    int refYear = 2001;
    int refDay = 1; 
    
    if (year >= refYear) {
        for (int i = refYear; i < year; i++) {
            days += isLeapYear(i) ? 366 : 365;
        }
    } else {
        for (int i = year; i < refYear; i++) {
            days -= isLeapYear(i) ? 366 : 365;
        }
    }
    
    int dayIndex = (refDay + (days % 7) + 7) % 7;
    
    switch (dayIndex) {
        case 0: printf("1st January %d was a Sunday\n", year); break;
        case 1: printf("1st January %d was a Monday\n", year); break;
        case 2: printf("1st January %d was a Tuesday\n", year); break;
        case 3: printf("1st January %d was a Wednesday\n", year); break;
        case 4: printf("1st January %d was a Thursday\n", year); break;
        case 5: printf("1st January %d was a Friday\n", year); break;
        case 6: printf("1st January %d was a Saturday\n", year); break;
    }
    
    return 0;
}