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

int isDoubloon(char* str, int* histogram);
void letterHist(char* str, int* histogram);

int main(void)
{
    char x[] = "wefiwefiwewrbREGERHTN";
    char x2[] = "aa";
    int histogram[26] = {0};
    //int y = isDoubloon(x, histogram);
    int y2 = isDoubloon(x2, histogram);
    //printf("%d", y);
    printf("%d\n", y2);
}

void letterHist(char* str, int* histogram)
{
    int cardinalityOfStr = strlen(str);
    for (int i = 0; i < cardinalityOfStr; i++)
    {
        str[i] = tolower(str[i]);
        histogram[(int)str[i] - 97]++;
    }
}

int isDoubloon(char* str, int* histogram)
{
    letterHist(str, histogram);

    /*
    for (int i = 0; i < 26; i++)
    {
        printf("%d\n", histogram[i]);
    }
    */

    for (int i = 0; i < 26; i++)
    {
        
        if ((histogram[i] != 0) && (histogram[i] != 2))
        {
        
            return 0;
        }
    }
    return 1;
}