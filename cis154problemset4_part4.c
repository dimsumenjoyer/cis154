/*
Victor Van
00319912
Problem Set 4.4
C - Professor Penta
2/18/2024, Due: 2/20/2024
*/

#include <stdio.h>

int main(void);
int validate(int number);

int main(void)
{
    validate(0);
    validate(3);
    validate(-2);
}

int validate(int number)
{
    if (number == 0)
    {
        printf("Error.\n");
        return 0;
    }
    else
    {
        printf("%d\n", number * 2);
        return 0;
    }
}