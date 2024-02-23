/*
Victor Van
00319912
Problem Set 4.3
C - Professor Penta
2/15/2024, Due: 2/20/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void);
void roll_die(void);
int recursive_roll_die(int iterations);

int main(void)
{
    srand(time(NULL));
    recursive_roll_die(3);
    return 0;
}

int recursive_roll_die(int iterations)
{
    if (iterations > 0)
    {
        roll_die();
        recursive_roll_die(iterations - 1);
    }
    else
    {
        return 0;
    }
}

void roll_die(void)
{
    int random_number = rand() % 6 + 1;
    switch (random_number)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            printf("%d\n", random_number);
        break;
    }

}