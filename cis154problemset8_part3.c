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

bool isDoubloon(char* str);

int main(void)
{
    char str[] = "Anna";
    bool x = isDoubloon(str);
    if (x)
    {
        puts("True");
    }
    else
    {
        puts("False");
    }

    return 0;
}

bool isDoubloon(char* str)
{
    int cardinalityOfString = strlen(str);
    int comparisonArray[26] = {0};
    for (int i = 0; i < cardinalityOfString; i++)
    {
            char lowerCaseString = tolower(str[i]);
            comparisonArray[(int)str[i] - 97]++;
            int cardinalityOfComparisonArray = 26;
            for (int i = 0; i < cardinalityOfString; i++)
            {
                if (!(comparisonArray[i] == 0) && !(comparisonArray[i] == 2))
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
    }
}
