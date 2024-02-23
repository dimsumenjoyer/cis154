/*
Victor Van
00319912
Problem Set 5.4
C - Professor Penta
2/22/2024, Due: 3/1/2024
*/

#include <stdio.h>

double power(double x, int n);

int main(void)
{
    double result = power(6, 6);
    printf("%lf", result);
}


double power(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return x * power(x, n - 1);
    }
}