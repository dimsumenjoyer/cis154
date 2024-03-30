/*
Victor Van
00319912
Problem Set 7.4
C - Professor Penta
3/3/2024, Due: 3/27/2024
*/

#include <stdio.h>

int sevenPointFour(int size_of_array, int array[], int target);
int randomName(int size_of_array, int array[], int target);

int main(void)
{
    int array[5] = {67, 214, 26, 71, 0};
    int x = sevenPointFour(5, array, 14);
    int y = sevenPointFour(5, array, 26);
    printf("%d\n", x);
    printf("%d\n", y);
    return 0;
}

int sevenPointFour(int size_of_array, int array[], int target)
{
    for (int i = 0; i < size_of_array; i++)
    {
        if (array[i] == target)
        {
            return i;
        }
    }
    return -1; // else breaks the code
}

int randomName(int size_of_array, int array[], int target)
{
    for (int i = 0; i < size_of_array; i++)
    {
        return (array[i] == target) ? i : -1;
    }
}