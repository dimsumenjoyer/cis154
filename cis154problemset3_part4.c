/*
Victor Van
00319912
Problem Set 3.3
C - Professor Penta
2/6/2024, Due: 2/13/2024
*/

#include <stdio.h>

int printdateEuropean(int day, int month, int year);
int printdateAmerican(int day, int month, int year);
int main(void);

int main(void)
{

    int day, month, year;

    printf("What is the day?\n");
    scanf("%d", &day);

    printf("What is the month?\n");
    scanf("%d", &month);

    printf("What is the year?\n");
    scanf("%d", &year);

    printdateAmerican(day, month, year);
    printdateEuropean(day, month, year);

    return 0;
}

int printdateAmerican(int day, int month, int year)
{
    printf("Date in American Format: %d/%d/%d\n", month, day, year);

    return 0;
}

int printdateEuropean(int day, int month, int year)
{
    printf("Date in European Format: %d/%d/%d\n", day, month, year);

    return 0;
}