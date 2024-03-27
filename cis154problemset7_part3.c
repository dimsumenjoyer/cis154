/*
Victor Van
00319912
Problem Set 7.3
C - Professor Penta
2/25/2024, Due: 3/27/2024
*/

#include <stdio.h>

void printIntArray(int size_of_array, int array[size_of_array]);
void threeDigitArray(void);

int main(void)
{
    threeDigitArray();
}

void printIntArray(int size_of_array, int array[size_of_array])
{
    for (int i = 0; i < size_of_array; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void threeDigitArray(void)
{
    int x, y, z;
    //int array[3];
    printf("Enter 3 digits:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    int array[3] = {x, y, z};
    printIntArray(3, array);
}