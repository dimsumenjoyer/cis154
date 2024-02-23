/*
Victor Van
00319912
Problem Set 5.6
C - Professor Penta
2/22/2024, Due: 3/1/2024
*/

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

double multadd(double a, double b, double c);

int main(void)
{
    double result = multadd(6, 7, 13);
    printf("Result: %lf\n", result);
}

double multadd(double a, double b, double c)
{
    double result = a * b + c;
    return result;
}