/*
Victor Van
00319912
Problem Set 3.5
C - Professor Penta
2/6/2024, Due: 2/13/2024
*/

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void);
void multadd(double a, double b, double c);
void yikes(void);

int main(void)
{
    double a, b, c;

    printf("a:\n");
    scanf("%lf", &a);
 
    printf("b:\n");
    scanf("%lf", &b);

    printf("c:\n");
    scanf("%lf", &c);

    multadd(a, b, c);
    yikes();

    return 0;
}

void multadd(double a, double b, double c)
{
    double result = a * b + c;
    printf("Result: %lf\n", result);
    
    return;
}

void yikes(void)
{
    double a, b, c, pi;

    pi = M_PI;//3.14159265358979323846;
    a = 1/2;
    b = cos(pi/4);
    c = sin(pi/4);
    multadd(a, b, c);

    // x * exp(-1) + sqrt(1 + exp(-1))

    double x, y, z;
    x = a;
    y = exp(-1);
    z = sqrt(1 + exp(-1));
    multadd(x, y, z);

    return;
}