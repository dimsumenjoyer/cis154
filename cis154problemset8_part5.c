/*
Victor Van
00319912
Problem Set 8.5
C - Professor Penta
4/4/2024, Due: 4/6/2024
*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>

void letterHist(char* str);
int testWord(char* str1, char* str2);

int main(void)
{ 
}

void letterHist(char* str)
{
    int histogram[] = {0};
    int cardinalityOfStr = strlen(str);
    for (int i = 0; i < cardinalityOfStr; i++)
    {
        if (islower(str[i]))
        {
            str[i] = tolower(str[i]);
            histogram[(int)str[i] - 97]++;
        }
        else if ((isupper(str[i])))
        {
            histogram[(int)str[i] - 65]++;
        }
    }
}

int testWord(char* str1, char* str2)
{
    if (strcmp(str1, str2) == -1)
    {
        puts("-1");
    }
    else if (strcmp(str1, str2) == 0)
    {
        puts("0");
    }
    else if (strcmp(str1, str2) == 1)
    {
        puts("1");
    }
    else
    {
        puts("Your code is probably fucked.");
    }
}