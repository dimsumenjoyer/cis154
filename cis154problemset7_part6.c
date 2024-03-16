/*
Victor Van
00319912
Problem Set 7.6
C - Professor Penta
3/5/2024, Due: 3/27/2024
*/

#include <stdio.h>

int indexOfMaxInRange(int array[], int LengthOfArray);
void swapElement(int array[], int LengthOfArray, int i1, int i2);
void sortArray(int array[], int LengthOfArray);

int main(void)
{
    int a1[5] = {0, 3, 6, 2, 7};
    int a2[5] = {51, 47, 85, 22, 19};
    //int x = indexOfMaxInRange(a1, 5);
    //printf("The index of the maximum number in this array is %d.\n", x);
    //sortArray(a1, 5);
    sortArray(a2, 5);
    return 0;
}

int indexOfMaxInRange(int array[], int LengthOfArray)
{
    int MaxIndex = 0;
    for (int i = 0; i < LengthOfArray; i++)
    {
        if (array[i] > array[MaxIndex])
        {
            MaxIndex = i;
        }
    }
    return MaxIndex;
}

void swapElement(int array[], int LengthOfArray, int i1, int i2)
{
    int Test = array[i1];
    array[i1] = array[i2];
    array[i2] = Test;
}

void sortArray(int array[], int LengthOfArray)
{
    for (int i = 0; i < LengthOfArray; i++)
    {
        for (int i2 = 0; i2 < LengthOfArray; i2++)
        {
            int MaxIndexOfArray = indexOfMaxInRange(array, (LengthOfArray - 1) - i2);
            if (array[MaxIndexOfArray] > array[MaxIndexOfArray - 1])
            {
                swapElement(array, LengthOfArray, MaxIndexOfArray, MaxIndexOfArray - i2);
                printf("%d\n", array[i2]);
            }
        }
        /*int MaxIndexOfArray = indexOfMaxInRange(array, (LengthOfArray - 1) - i);
        swapElement(array, LengthOfArray, MaxIndexOfArray, MaxIndexOfArray - i);
        printf("%d\n", array[i]);*/
    }
}