#include <stdio.h>

int indexOfMaxInRange(int array[], int Start, int End);
void swapElement(int array[], int i1, int i2);
void sortArray(int array[], int LengthOfArray);
//int sortArrayRecursive(int array[], int LengthOfArray, int i);

int main(void)
{
    int a1[5] = {0, 3, 6, 2, 7};
    int a2[5] = {51, 47, 85, 19, 23};
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
    int Max = array[0];
    int MaxIndex = 0;
    for (int i = Start; i <= End; i++)
    {
        if (array[i] > array[MaxIndex])
        {
            Max = array[i];
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
    int indexOfMaxValue = 0;
    for (int i = 0; i < LengthOfArray - 1; i++)
    {
        indexOfMaxValue = indexOfMaxInRange(array, array[i], array[i + 1]);
        if (array[i] > array[indexOfMaxValue])
        {
            swapElement(array, i, indexOfMaxValue);
        }
    }
}

/*
int sortArrayRecursive(int array[], int LengthOfArray, int i)
{
    int MaxValue = array[indexOfMaxInRange(array[LengthOfArray], i, LengthOfArray - 1)];
    //int IndexWithMaximumValue = indexOfMaxInRange(array, i, LengthOfArray - 1);
    if ((array[i] > array[MaxValue]) && i < LengthOfArray - 1)
    {
        swapElement(array, i, MaxValue);
        sortArrayRecursive(array, LengthOfArray, i + 1);
    }
}
*/
