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

void printPerson(Person_t* personInfo);
void happyBirthday(Person_t* personInfo);
int* fillArray(int cardinality);
void numberFile(int* array);

int main(void)
{
    srand(time(NULL));
    Person_t person1 = {"Betsy", 42};
    Person_t person2 = {"Victor", 23};
    printPerson(&person1);
    printPerson(&person2);
    happyBirthday(&person1);
    happyBirthday(&person2);
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
int* fillArray(int cardinality)
{
    int* array = (int*)malloc(cardinality * sizeof(int));
    for (int i = 0; i < cardinality; i++)
    {
        int randomNumbers = rand() % (cardinality + 1);
        array[i] = randomNumbers;
    }
    return array;
}

void numberFile(int* array)
{
    FILE *file = fopen("numberFile.md", "w");
}
