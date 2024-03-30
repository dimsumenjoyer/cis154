/*
Victor Van
00319912
Problem Set 8.1
C - Professor Penta
3/30/2024, Due: 4/6/2024
*/

#include <stdio.h>

int isAbecedarian(char word[], int wordMagnitude);

int main(void)
{
    char name[5] = "abcde"; //It has to be the exact elements in the array or it always returns false
    char name2[5] = "abCde";
    char name3[6] = "Victor";
    char name4[4] = "!@#$";
    int wordMagnitude = sizeof(name) / sizeof(name[0]) - 1;
    int word2Magnitude = sizeof(name2) / sizeof(name2[0]) - 1;
    int word3Magnitude = sizeof(name3) / sizeof(name3[0]) - 1;
    int word4Magnitude = sizeof(name4) / sizeof(name4[0]) - 1;
    int test = isAbecedarian(name, wordMagnitude);
    int test2 = isAbecedarian(name2, word2Magnitude);
    int test3 = isAbecedarian(name3, word3Magnitude);
    int test4 = isAbecedarian(name4, word4Magnitude);
    printf("%d\n", test); // code doesn't work without \n
    printf("%d\n", test2);
    printf("%d\n", test3);
    printf("%d\n", test4);
    return 0;
}

int isAbecedarian(char word[], int wordMagnitude)
{
    for (int i = 0; i < wordMagnitude - 1; i++)
    {
        if (!((int)word[i] > 64 && (int)word[i] < 90) && !((int)word[i] > 96 && (int)word[i] < 123))
        {
            return -1;
        }
        if ((int)word[i] > (int)word[i + 1]) // doesn't account for mixing lowercase & uppercase letters 
        {

            return 0;
        }
    }
    return 1;
}
