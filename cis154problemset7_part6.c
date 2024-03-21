/*
Victor Van
00319912
Problem Set 7.6
C - Professor Penta
3/5/2024, Due: 3/27/2024
*/

#include <stdio.h>

int indexOfMaxInRange(int array[], int Start, int End);
void swapElement(int array[], int i1, int i2);
void sortArray(int array[], int LengthOfArray);

int main(void)
{
    int a1[5] = {0, 3, 6, 2, 7};
    int a2[5] = {51, 47, 85, 22, 19};
    sortArray(a2, 5);
    for (int i = 0; i < 5; i++)
    {
        int x = a2[i];
        printf("%d\n", x);
    }
    return 0;
}

int indexOfMaxInRange(int array[], int Start, int End)
{
    int MaxIndex = 0;
    for (int i = Start; i <= End; i++)
    {
        if (array[i] > array[MaxIndex])
        {
            MaxIndex = i;
        }
    }
    return MaxIndex;
}

void swapElement(int array[], int i1, int i2)
{
    int Test = array[i1];
    array[i1] = array[i2];
    array[i2] = Test;
}

void sortArray(int array[], int LengthOfArray)
{
    int IndexWithMaximumValue = 0;
    for (int i1 = 0; i1 < LengthOfArray; i1++)
    {
        IndexWithMaximumValue = indexOfMaxInRange(array, i1, LengthOfArray - 1);
        if (array[i1] > array[IndexWithMaximumValue])
        {
            swapElement(array, i1, IndexWithMaximumValue);
        }
    }
} 