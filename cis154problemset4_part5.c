/*
Victor Van
00319912
Problem Set 4.5
C - Professor Penta
2/18/2024, Due: 2/20/2024
*/

#include <stdio.h>

int main(void);
int bottles_of_beer_song(int iterations);

int main(void)
{
    bottles_of_beer_song(99);
}

int bottles_of_beer_song(int iterations)
{
    if (iterations > 0)
    {
        printf("%d bottles of beer on the wall, %d bottles of beer, ya' take one down, ya' pass it around, %d bottles of beer on the wall\n", iterations, iterations, iterations - 1);
        bottles_of_beer_song(iterations - 1);
    }
    else
    {
        printf("No bottles of beer on the wall, no bottles of beer, ya' can't take one down, \n");
        printf("ya' can't pass it around, 'cause there are no more bottles of beer on the wall!\n");
    }
    return 0;
}

/*
99 bottles of beer on the wall, 99 bottles of beer, ya’ take one down, ya’
pass it around, 98 bottles of beer on the wall.
*/