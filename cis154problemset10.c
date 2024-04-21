/*
Victor Van
00319912
Problem Set 10
C - Professor Penta
4/18/2024, Due: 4/27/2024
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct
{
    char* personName;
    int personAge;
} Person_t;

typedef struct
{
    int* array;
    int cardinalityOfArray;
} intArrayInfo;

typedef struct
{
char initial1;
char intial2;
char intial3;
int score;
} HighScoreEntry;


void printPerson(Person_t* personInfo);
void happyBirthday(Person_t* personInfo);
intArrayInfo* fillArray(int cardinalityOfArray);
void numberFile(intArrayInfo* arrayInfo);
void sumOfNumbersFile(intArrayInfo* arrayInfo);

int main(void)
{
    srand(time(NULL));
    Person_t person1 = {"Betsy", 42};
    Person_t person2 = {"Victor", 23};
    printPerson(&person1);
    printPerson(&person2);
    happyBirthday(&person1);
    happyBirthday(&person2);
    intArrayInfo* arrayInfo = fillArray(50);
    numberFile(arrayInfo);
    sumOfNumbersFile(arrayInfo);
    free(arrayInfo -> array);
    free(arrayInfo);
    return 0;
}

// Problem 9.1:
void printPerson(Person_t* personInfo)
{
    printf("%s, %d\n", personInfo -> personName, personInfo -> personAge);
}

// Problem 9.2:
void happyBirthday(Person_t* personInfo)
{
    personInfo -> personAge++;
    printf("Happy %d birthday, %s\n", personInfo -> personAge, personInfo -> personName);
}

// Problem 10.1
intArrayInfo* fillArray(int cardinalityOfArray)
{
    intArrayInfo* arrayPointer = (intArrayInfo*)malloc(sizeof(intArrayInfo));
    arrayPointer -> cardinalityOfArray = cardinalityOfArray;
    arrayPointer -> array = (int*)malloc(cardinalityOfArray * sizeof(int));
    for (int i = 0; i < cardinalityOfArray; i++) 
    {
        int randomNumbers = rand() % (cardinalityOfArray + 1);
        arrayPointer -> array[i] = randomNumbers;
    }
    return arrayPointer;
}

void numberFile(intArrayInfo* arrayInfo) 
{
    FILE *file = fopen("numberFile.md", "a+");
    for (int i = 0; i < arrayInfo -> cardinalityOfArray; i++)
    {
        fprintf(file, "%d\n", arrayInfo -> array[i]);
    }
    fclose(file);
}

// Problem 10.2
void sumOfNumbersFile(intArrayInfo* arrayInfo) //bugged. Usually doesn't print from the very start of file, and thereby gives the wrong sum.
{
    FILE *file = fopen("numberFile.md", "r");
    int sum = 0;
    int numberInFile = 0;
    for (int i = 0; i < arrayInfo -> cardinalityOfArray; i++) 
    {
        if (fscanf(file, "%d", &numberInFile)) 
        {
            arrayInfo -> array[i] = numberInFile;
            printf("%d\n", arrayInfo -> array[i]);
            sum += arrayInfo -> array[i];
        }
    }
    printf("Sum: %d\n", sum);
    fclose(file);
}
// Problem 10.3