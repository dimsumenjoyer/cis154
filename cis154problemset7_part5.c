/*
Victor Van
00319912
Problem Set 7.5
C - Professor Penta
3/3/2024, Due: 3/27/2024
*/

#include <stdio.h>

int sumOfArray(int array[], int size_of_array);

int main(void)
{
    int array[20] = {};
    int size_of_array = 20;

    for (int i = 0; i < size_of_array; i++)
    {
        int user_input;
        printf("%d) Enter a number:\n", i + 1);
        scanf("%d", &user_input);

        if (user_input < 0)
        {
            break;
        }

        array[i] = user_input;
    }

    int sum_of_array = sumOfArray(array, size_of_array);
    printf("The sum of the elements of the array is: %d.\n", sum_of_array);

    return 0;
}

int sumOfArray(int array[], int size_of_array)
{
    int sum = 0;

    for (int i = 0; i < size_of_array; i++)
    {
        sum += array[i];
    }

    return sum;
}