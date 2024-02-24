/*
Victor Van
00319912
Problem Set 6.1
C - Professor Penta
2/24/2024, Due: 3/26/2024
*/

#include <stdio.h>

void loop(int n);

int main(void)
{
    loop(10);
    return 0;
}

void loop(int n)
{
    int i = n;
    while (i > 1)
    {
        printf ("%i\n", i);
        if (i % 2 == 0)
        {
            i = i / 2;
        }
        else
        {
            i = i + 1;
        }
    }
}