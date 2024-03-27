/*
Victor Van
00319912
Problem Set 7.2
C - Professor Penta
2/25/2024, Due: 3/27/2024
*/

#include <stdio.h>

int main(void)
{
    int number = 71;
    int last_digit = number % 10;
    int first_digit = number / 10;
    printf("%i%i\n", last_digit, first_digit);
}