/*
Victor Van
00319912
Problem Set 4.6
C - Professor Penta
2/19/2024, Due: 2/20/2024
*/

#include <stdio.h>

int main(void);
void digit_input(void);

int main(void)
{
    digit_input();
    return 0;
}

void digit_input(void)
{
    int digit;
    printf("Enter a digit between 0-9: ");
    scanf("%d", &digit);
    switch (digit)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
            printf("%d\n", digit);
            break;
        default:
            printf("Program Terminated!\n");
            break;
    }
}