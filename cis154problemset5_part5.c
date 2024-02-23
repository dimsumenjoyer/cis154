/*
Victor Van
00319912
Problem Set 5.5
C - Professor Penta
2/22/2024, Due: 3/1/2024
*/

#include <stdio.h>
#include <math.h>

double findDistance(double x1, double y1, double x2, double y2);
double power(double x, long double n);
double absoluteValue(long double difference);

int main(void)
{   
    findDistance(243, 526, 143, 347);
}

double power(double x, long double n)
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

double absoluteValue(long double difference)
{
    if (difference <  0)
    {
        double absolute_value = difference * -1;
        return absolute_value;
    }
    else
    {
        return difference;
    }
}

double findDistance(double x1, double y1, double x2, double y2)
{
    double x = absoluteValue(x2 - x1);
    double y = absoluteValue(y2 - y1);
    double distance = sqrt((power(x, 2) + power(y, 2)));
    printf("Distance: %lf", distance);
}