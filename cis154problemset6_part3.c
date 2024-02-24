/*
Victor Van
00319912
Problem Set 6.3
C - Professor Penta
2/24/2024, Due: 3/26/2024
*/

#include <stdio.h>
#include <stdbool.h>

int getFirstNumber(void);
int getSecondNumber(int n);
void printRange(int lower_bound, int upper_bound);

int main(void)
{
    int user_input = getFirstNumber();
    int user_input2 = getSecondNumber(user_input);
    printRange(user_input, user_input2);
}

int getFirstNumber(void)
{
    bool done = false;
    int user_input;
    printf("Enter a number 1-10:\n");
    scanf("%d", &user_input);
    while (!done)
    {
        if (user_input < 1 || user_input > 10)
        {
            printf("Not a Valid Number 1 - 10:\n");
            scanf("%d", &user_input);
        }
        else
        {
            return user_input;
            bool done = true;
        }
    }
}

int getSecondNumber(int n)
{
    bool done = false;
    int user_input2;
    printf("Enter a number between n and 15:\n");
    scanf("%d", &user_input2);
    while (!done)
    {
        if (user_input2 < n || user_input2 > 15)
        {
            printf("Not a Valid Number. Choose between n and 15:\n");
            scanf("%d", &user_input2);
        }
        else
        {
            return user_input2 + 1;
            bool done = true;
        }
    }
}

void printRange(lower_bound, upper_bound)
{
    for (int i = lower_bound; i < upper_bound; i++)
    {
        printf("%d\n", i);
    }
}