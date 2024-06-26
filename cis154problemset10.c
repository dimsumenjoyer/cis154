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
    char initial2;
    char initial3;
    int score;
} HighScoreEntry;

void printPerson(Person_t* personInfo);
void happyBirthday(Person_t* personInfo);
intArrayInfo* fillArray(int cardinalityOfArray);
void numberFile(intArrayInfo* arrayInfo);
void sumOfNumbersFile(intArrayInfo* arrayInfo);

void scoreMenu(void);
void displayScore(void);
void inputScore(HighScoreEntry x);

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
    //numberFile(arrayInfo);
    //sumOfNumbersFile(arrayInfo);
    //scoreFunction();
    free(arrayInfo -> array);
    free(arrayInfo);

    HighScoreEntry x;
    for (int i = 0; i < 10; i++)
    {
        x.initial1 = 'a';
        x.initial2 = 'b';
        x.initial3 = 'c';
        x.score = 0;
    }

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
    FILE *file = fopen("numberFile.md", "w"); // a+
    for (int i = 0; i < arrayInfo -> cardinalityOfArray; i++)
    {
        fprintf(file, "%d\n", arrayInfo -> array[i]);
    }
    fclose(file);
}

// Problem 10.2
void sumOfNumbersFile(intArrayInfo* arrayInfo)
{
    FILE *file = fopen("numberFile.md", "r");
    int sum = 0;
    int numberInFile = 0;
    for (int i = 0; i < arrayInfo -> cardinalityOfArray; i++) 
    {
        if (fscanf(file, "%d", &numberInFile) > 0) 
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

void inputScore(HighScoreEntry x)
{

}