/*
Victor Van
00319912
Problem Set 8.2
C - Professor Penta
3/30/2024, Due: 4/6/2024
*/

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void letterHist(char str[], int histogram[]);

int main(void)
{
    char x[] = "wefiwefiwewrbREGERHTN";
    int histogram[26] = {0};
    letterHist(x, histogram);
    for (int i = 0; i < 26; i++)
    {
        printf("%d\n", histogram[i]);
    } 
}

void letterHist(char str[], int histogram[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = tolower(str[i]);
    
        if (!(str[i] >= 'a' && str[i] <= 'z'))
        {
            break;
        }
        histogram[(int)str[i] - 97]++;
    }
}