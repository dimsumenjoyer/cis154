/*
Victor Van
00319912
Problem Set 5.1
C - Professor Penta
2/22/2024, Due: 3/1/2024
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

int isTriangle(int x, int y, int z);

int main(void)
{
    isTriangle(1, 1, 12);
}

int isTriangle(int x, int y, int z)
{
    if ((x * x) + (y * y) == z * z)
    {
        return TRUE;
        printf("True");
    }
    else
    {
        printf("False");
        return FALSE;
    }
}