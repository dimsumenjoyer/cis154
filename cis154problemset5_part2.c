/*
Victor Van
00319912
Problem Set 5.2
C - Professor Penta
2/22/2024, Due: 3/1/2024
*/

#include <stdio.h>
#define TRUE 1
#define FALSE 0

short isHoopy (int);
short isFrabjuous (int);

int main (void)
{
    short flag1 = isHoopy(202);
    short flag2 = isFrabjuous(202);
    printf("%i\n", flag1);
    printf("%i\n", flag2);
    if (flag1 && flag2)
        {
            puts("ping!");
        }
    if (flag1 || flag2)
        {
            puts("pong!");
        }
return 0;
}

short isHoopy(int x)
{
    short hoopyFlag;
    if (x % 2 == 0)
    {
        hoopyFlag = TRUE;
    }
    else
    {
        hoopyFlag = FALSE;
    }
    return hoopyFlag;
}

short isFrabjuous(int x)
{
    short frabjuousFlag;
    if (x > 0)
    {
        frabjuousFlag = TRUE;
    }
    else
    {
        frabjuousFlag = FALSE;
    }
    return frabjuousFlag;
}