/*
Victor Van
00319912
Problem Set 6.2
C - Professor Penta
2/24/2024, Due: 3/26/2024
*/

#include <stdio.h>

double power(double x, int n);

int main(void)
{
    double result = power(2, 1);
    printf("%lf\n", result);
}

double power(double x, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        while(n > 1)
        {
            x *= x;
            n--;
        }
    return x;
    }
}