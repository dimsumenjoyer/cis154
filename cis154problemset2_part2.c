/*
Victor Van
00319912
Problem Set 2.2
C - Professor Penta
1/30/2024, Due: 2/1/2024
*/

// I won't name this file MyTime.c

#include <stdio.h>

int main(void)
{
    int hour = 16;
    int minute = 8;
    int second = 0;

    int time_since_midnight = (hour * 3600) + (minute * 60) + second;
    printf("Seconds since midnight: %d\n", time_since_midnight);

    int seconds_remaining_in_the_day = 86400 - ((hour * 3600) + (minute * 60) + second);
    printf("Seconds remaining in the day: %d\n", seconds_remaining_in_the_day);
    
    float percentage_of_day_that_passed = (time_since_midnight/86400.00f)*100;
    printf("Day Passed in Percentage: %f\n", percentage_of_day_that_passed);

    return 0;
}