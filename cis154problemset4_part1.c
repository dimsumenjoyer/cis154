/*
Victor Van
00319912
Problem Set 4.1
C - Professor Penta
2/15/2024, Due: 2/20/2024
*/

#include <stdio.h>

int main(void);
void part1_function(void);

int main(void)
{
    part1_function();

    return 0;
}

void part1_function(void)
{
    int m = 0;
    int n = 1;
    char p = 'k';
    char s = 'F';
    double t = 1;

    printf("%d\n", m / n); // a
    printf("%d\n", m + n); // b
    printf("%d\n", m); // c
    printf("%d\n", (int)(p <= s)); // d
    printf("%d\n", (int)(t < n)); // e

    return;
}