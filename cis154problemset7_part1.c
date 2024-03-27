/*
Victor Van
00319912
Problem Set 7.1
C - Professor Penta
2/25/2024, Due: 3/27/2024
*/

#include <stdio.h>

void printIntArray(int size_of_array, int array[size_of_array]);
void threeDigitArray(void);

int main(void)
{
    int x[5] = {2, 5, 7, 8, 1};
    int y[4] = {1, 2, 9, 1};
    printIntArray(5, x);
    printIntArray(4, y);
    return 0;
}

void printIntArray(int size_of_array, int array[size_of_array])
{
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}