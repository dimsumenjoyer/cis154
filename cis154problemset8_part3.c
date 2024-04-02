/*
Victor Van
00319912
Problem Set 8.3
C - Professor Penta
3/30/2024, Due: 4/6/2024
*/

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool isDoubloon(char str[]);

int main(void)
{
    char str[4] = "Anna";
    bool x = isDoubloon(str);
    if (x == false)
    {
        puts("False");
    }
    else
    {
        puts("True");
    }

    return 0;
}

bool isDoubloon(char str[])
{
    int magntitudeOfString = strlen(str);
    int comparisonArray[26] = {0};
    for (int i = 0; i < magntitudeOfString; i++)
    {
        if ((int)str[i] > 64 && (int)str[i] < 90 || ((int)str[i] > 96 && (int)str[i] < 123))
        {
            char lowerCaseString = tolower(str[i]);
        }
    }
}