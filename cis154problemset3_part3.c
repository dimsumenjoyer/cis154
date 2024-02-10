/*
Victor Van
00319912
Problem Set 3.3
C - Professor Penta
2/5/2024, Due: 2/13/2024
*/

#include <stdio.h>

int zool(int n, char c1, char c2);
int main(void);

int main(void)
{
    zool(11, 'a', 'z');
    return 0;
}

int zool(int n, char c1, char c2)
{
    printf("n: %d, c1: %c, c2: %c\n", n, c1, c2);
    return 0;
}