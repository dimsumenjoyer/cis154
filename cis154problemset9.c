/*
Victor Van
00319912
Problem Set 9.1
C - Professor Penta
4/11/2024, Due: 4/13/2024
*/

#include <stdio.h>
#include <string.h>

int* createIntArray(int cardinalityOfArray);
char* userInput(char* s1, char* s2, char* s3);

int main(void)
{
    int* x = createIntArray(3);
    printf("%p\n", x);
    char* s1 = "efwefwfg";
    char* s2 = "vetbntnrtwe";
    char* s3 = "nrymtyjthsrt";
    char* s4 = userInput(s1, s2, s3);
    puts(s4);
    return 0;
}

int* createIntArray(int cardinalityOfArray)
{
    int* result = 0;
    result = (int*) malloc(cardinalityOfArray * sizeof(int));
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        *(result + i) = -1; // = result[i] = -1;
    }
    return result;
}

char* userInput(char* s1, char* s2, char* s3)
{
    int cardinality = strlen(s1) + strlen(s2) + strlen(s3) + 1;
    char* s4 = (char*)malloc(cardinality); // IMPORTANT
    int currentIndex = 0;
    for (int i = 0; i < strlen(s1); i++)
    {
        s4[currentIndex] = s1[i];
        currentIndex++;
    }
    for (int i = 0; i < strlen(s2); i++)
    {
        s4[currentIndex] = s2[i];
        currentIndex++;
    }
    for (int i = 0; i < strlen(s3); i++)
    {
        s4[currentIndex] = s3[i];
        currentIndex++;
    }
    s4[currentIndex] = '\0';
    return s4;
}