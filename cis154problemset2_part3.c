/*
Victor Van
00319912
Problem Set 2.3
C - Professor Penta
1/31/2024, Due: 2/1/2024
*/

#include <stdio.h>

int main(void)
{
    
    int day, month, year;
    char colon;
    colon = ':';

    printf("Day:\n");
    scanf("%d", &day);

    printf("Month:\n");
    scanf("%d", &month);

    printf("Year:\n");
    scanf("%d", &year);

    printf("The date is%c %d, %d, %d\n", colon, day, month, year);
    printf("The date is%c %d, %d, %d\n", colon, month, day, year);

    return 0;
}

// 2/1/2024 - Class 2 Notes:
/*
1) DATA TYPES:

- how much memory

- int (4 bytes), char (1 byte), float (4 bytes), double (8 bytes)

- short, long, unsigned, signed

- how data behaves
(char + char = ?)

2) EXPRESSION EVALUATION:

- P MDR AS -> exponents don't exist in C

3) I/O (Print/Scan):

puts("Hello")

printf("%i"\n, x)

scanf("%i", &x)
& -> pass by reference

Binary -> 2^7 - 128 (0), 2^6 - 64 (0)...

a double is a long float

int + char = char/int (e.g. 2 + 'A'/65 = 67/C)

int / int = int (e.g. 5/2 = 2 -> != 2.5)
5 % 2 = 2.5

% remainder operator -> all encryption uses remainders (difficult to find the correct prime numbers)
*/