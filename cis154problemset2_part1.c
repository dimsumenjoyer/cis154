/*
Victor Van
00319912
Problem Set 2.1
C - Professor Penta
1/30/2024, Due: 2/1/2024
*/

#include <stdio.h>

// I will not name this file "MyDate.c" because I already have a naming convention with my files to help organize them.

int main()
{
    int day = 25;
    int month = 1;
    int year = 2024;
    char colon = ':';
    printf("The date is%c %i/%i/%i\n", colon, month, day, year);
    printf("The date is%c %i/%i/%i\n", colon, day, month, year);
    printf("The month is%c %i\n", colon, month);
    printf("The day is%c %i\n", colon, day);
    printf("The year is%c %i\n", colon, year);
    return 0;
}
