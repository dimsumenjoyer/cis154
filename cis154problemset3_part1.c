/*
Victor Van
00319912
Problem Set 3.1
C - Professor Penta
2/4/2024, Due: 2/13/2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
a. x + 1
b. x + y
c. x/3
d. x/3.0
e. (int)y
f. (int)z
*/

int main(void)
{
    int x = 2;
    double y = 1.2;
    char z = 'A';

    int a = x + 1;

    printf("a) %d\n", a);
    printf("b) %d\n", x + y);
    printf("c) %d\n", x / 3);
    printf("d) %d\n", x / 3.0);
    printf("e) %d\n", (int)y);
    printf("f) %d\n", (int)z);

    return 0;
}