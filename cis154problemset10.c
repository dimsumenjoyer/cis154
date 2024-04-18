/*
Victor Van
00319912
Problem Set 10
C - Professor Penta
4/18/2024, Due: 4/27/2024
*/

#include <stdio.h>

printPerson(Person_t* personName);
happyBirthday(int ageOfPerson);

// Problem 9.1:

// Problem 9.2:

typedef struct
{
    int person1, person2;
} Person_t;

int main(void)
{
    char* person1Name = "Betsy";
    char* person2Name = "Victor";
    printPerson(person1Name);
    printPerson(person2Name);
}

printPerson(Person_t* personName)
{
    Person_t person;
    person.person1 = 46;
    person.person2 = 23;
}

happyBirthday(int ageOfPerson)
{

}