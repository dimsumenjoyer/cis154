/*
Victor Van
00319912
Problem Set 10
C - Professor Penta
4/18/2024, Due: 4/27/2024
*/

#include <stdio.h>

typedef struct
{
    char* personName;
    int personAge;
} Person_t;

void printPerson(Person_t* personInfo);
void happyBirthday(Person_t* personInfo);

// Problem 9.1:

// Problem 9.2:

int main(void)
{
    Person_t person1 = {"Betsy", 42};
    Person_t person2 = {"Victor", 23};
    printPerson(&person1);
    printPerson(&person2);
    happyBirthday(&person1);
    happyBirthday(&person2);
}

void printPerson(Person_t* personInfo)
{
    printf("%s, %d\n", personInfo -> personName, personInfo -> personAge);
}

void happyBirthday(Person_t* personInfo)
{
    personInfo -> personAge++;
    printf("Happy %d birthday, %s\n", personInfo -> personAge, personInfo -> personName);
}