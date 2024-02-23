/*
Victor Van
00319912
Problem Set 4.2
C - Professor Penta
2/15/2024, Due: 2/20/2024
*/

#include <stdio.h>
#include <stdlib.h>

void zippo(int, int);
void baffle(int);

int main(void)
    {
        zippo(5, 13); // 1

        return EXIT_SUCCESS;
    }

void baffle(int output)
    {
        printf ("%i\n",output); // 4
        zippo (12, -5); // 5
    }

    void zippo(int quince, int flag)
        {
    if (flag < 0)
        {
            printf("%i zoop\n", quince); // 6
        }
    else
        {
            printf("rattle "); // 2
            baffle(quince); // 3
            printf("boo-wa-ha-ha\n"); // 7
        }
}