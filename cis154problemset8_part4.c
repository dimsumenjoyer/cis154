/*
Victor Van
00319912
Problem Set 8.4
C - Professor Penta
4/3/2024, Due: 4/6/2024
*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char* encoderCaptainCrunch(char* str);
char* decoderCaptainCrunch(char* str);
// We don't actually have to return arrays yet.

int main(void)
{
    char str[] = "weEGEWGrSEFEGWENGVSDvkNERWlgbkjewrnbeKJRBEIRVSLewwe";
    encoderCaptainCrunch(str);
}

char* encoderCaptainCrunch(char* str)
{
    int cardinalityOfStr = strlen(str);
    for (int i = 0; i < cardinalityOfStr; i++)
    {
        if (isupper(str[i])) 
        {
            str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
        } 
        else if (islower(str[i])) 
        {
            str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
        }
        else
        {
            puts("Your code is fucked.");
        }
        printf("%c\n", str[i]);
    }
    decoderCaptainCrunch(str);
}

char* decoderCaptainCrunch(char* str)
{
    int cardinalityOfStr = strlen(str);
    for (int i = 0; i < cardinalityOfStr; i++)
    {
        if (isupper(str[i])) 
        {
            str[i] = ((str[i] - 'A' + 13) % 26) + 'A';
        } 
        else if (islower(str[i])) 
        {
            str[i] = ((str[i] - 'a' + 13) % 26) + 'a';
        }
        else
        {
            puts("Your code is fucked.");
        }
        printf("%c\n", str[i]);
    }
}