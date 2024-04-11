/*
Victor Van
3/24/2024, Due: 4/13/2024
C - Professor Penta
Project 2
*/

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void clearScreen(void);
int randomDecider(void);
int generateRandomBurger(int* randomBurgerOrder, int cardinalityOfArray);
int buildBurger(int* array, int cardinalityOfArray);
void printBurger(int* burgerOrder, int cardinalityOfArray);
int compareBurger(int* a1, int* a2, int a1Cardinality, int a2Cardinality);
int calculateTools(int* a1, int a1Cardinality, int orderCorrectOrIncorrect);
int playRound(void);

void histrogramFunction(int* array, int* histrogram);

int isMascotSpecial(int* burgerOrder, int cardinalityOfArray);
int isVeggieSpecial(int* burgerOrder, int cardinalityOfArray);
int isGlutenFreeSpecial(int* burgerOrder, int cardinalityOfArray);

double calculateCondiments(int* burgerOrder, int cardinalityOfArray, double score);
double calculateVeggies(int* burgerOrder, int cardinalityOfArray, double score);
double calculateCheese(int* burgerOrder, int cardinalityOfArray, double score);

int main(void) 
{
    srand(time(NULL));
    int totalScore = 0;
    int userInput;
    int iteration = 0;
    int veryDescriptiveArrayName[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("Want to play? (0 v 1): \n");
    scanf("%d", &userInput);
    while (userInput != 0 && userInput == 1) 
    {
        iteration++;
        if (iteration != 1)
        {
            clearScreen();
        }
        printBurger(veryDescriptiveArrayName, 11);
        totalScore += playRound();
        printf("Total score: %d\n", totalScore);
        printf("Play again? (0 v 1): \n");
        scanf("%d", &userInput);
    }
    printf("Game over. Final score: %d\n", totalScore);
    return 0;
}

void clearScreen(void)
{
    for (int i = 50; i > 0; i--)
    {
        puts("");
    }
}

int randomDecider(void)
{
    int randomNumber = rand() % 2;
    return randomNumber;
}

int generateRandomBurger(int* burgerOrder, int cardinalityOfArray)
{
    int ingredientCount = 0;
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        if (randomDecider())
        {
            burgerOrder[ingredientCount++] = i;
        }
    }
    return ingredientCount;
}

int buildBurger(int* array, int cardinalityOfArray) 
{
    for (int i = 0; i < cardinalityOfArray; i++) 
    {
        int userOrderInput;
        printf("Pick your ingredients of your burger (0 - 10): \n");
        scanf("%d", &userOrderInput);
        if (userOrderInput < 0 || userOrderInput > 10) 
        {
            printf("Error: Invalid Order. Enter a number between 0 - 10\n");
            i--;
        } 
        else 
        {
            array[i] = userOrderInput;
        }
    }
    return cardinalityOfArray;
}

void printBurger(int* burgerOrder, int cardinalityOfArray)
{
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        switch (burgerOrder[i])
        {
            case 0: puts("0 - Top Bun"); break; case 1: puts("1 - Mayo"); break; case 2: puts("2 - Mustard"); break;
            case 3: puts("3 - Ketchup"); break; case 4: puts("4 - Tomato"); break; case 5: puts("5 - Onion"); break;
            case 6: puts("6 - Lettuce"); break; case 7: puts("7 - Pickle"); break; case 8: puts("8 - Cheese"); break;
            case 9: puts("9 - Patty"); break; case 10: puts("10 - Bottom Bun"); break;
            default: puts("If you're reading this, then your code is fucked.");
        }
    }
}

int compareBurger(int* a1, int* a2, int a1Cardinality, int a2Cardinality)
{
    int histrogram[11] = {0};
    histrogramFunction(a1, histrogram);
    histrogramFunction(a2, histrogram);
    for (int i = 0; i < 11; i++)
    {
        if (a1[i] != a2[2])
        {
            return 0;
        }
    }
    return 1;
}

void histrogramFunction(int* array, int* histrogram)
{
    for (int i = 0; i < 11; i++)
    {
        histrogram[array[i]]++;
    }
}

int calculateTotals(int* burgerOrder, int cardinalityOfArray, int orderCorrectOrIncorrect) 
{
    double score = 0;
    double baseCostOfBurger = 6.99; 
    score += baseCostOfBurger;
    calculateCondiments(burgerOrder, cardinalityOfArray, score);
    calculateVeggies(burgerOrder, cardinalityOfArray, score);
    calculateCheese(burgerOrder, cardinalityOfArray, score);
    if (isMascotSpecial(burgerOrder, cardinalityOfArray))
    {
        puts("Knight Mascot Special!");
        puts("+ $2.00");
        score += 2.00;
    }
    else if (isVeggieSpecial(burgerOrder, cardinalityOfArray))
    {
        puts("Haverhill Sucks - Veggie Special!");
        puts("- $2.00");
        score -= 2.00;
    }
    else if (isGlutenFreeSpecial(burgerOrder, cardinalityOfArray))
    {
        puts("Peer Tutoring Gluten Free Special!");
        puts("- $1.00");
        score -= 1.00;
    }
    else
    {
        puts("Your code is probably fucked.");
    }
    return score;
}

int isMascotSpecial(int* burgerOrder, int cardinalityOfArray)
{
    return (cardinalityOfArray == 11);
}

int isVeggieSpecial(int* burgerOrder, int cardinalityOfArray)
{
    int ingredientCount = 0;
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        if (burgerOrder[i] != 9)
        {
            ingredientCount++;
        }
    }
    if (ingredientCount >= 3)
    {
        return 1;
    }
    return 0;
}

int isGlutenFreeSpecial(int* burgerOrder, int cardinalityOfArray)
{
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        if (burgerOrder[i] == 0 || burgerOrder[i] == 10)
        {
            return 0;
        }
    }
    return 1;
}

double calculateCondiments(int* burgerOrder, int cardinalityOfArray, double score)
{
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        if (burgerOrder[i] == 1 || burgerOrder[i] == 2 || burgerOrder[i] == 3)
        {
            score += 0.39;
        }
    }
    return score;
}

double calculateVeggies(int* burgerOrder, int cardinalityOfArray, double score)
{
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        if (burgerOrder[i] == 4 || burgerOrder[i] == 5 || burgerOrder[i] == 6 || burgerOrder[i] == 7)
        {
            score += 0.69;
        }
    }
    return score;
}

double calculateCheese(int* burgerOrder, int cardinalityOfArray, double score)
{
    for (int i = 0; i < cardinalityOfArray; i++)
    {
        if (burgerOrder[i] == 8)
        {
            score += 1.29;
        }
    }
    return score;
}

int playRound(void)
{
    int randomBurgerOrder[11] = {0};
    int randomBurger = generateRandomBurger(randomBurgerOrder, 11);
    int userBurgerOrder[11] = {0};
    int userBurgerCount = buildBurger(userBurgerOrder, 11);
    int orderCorrectOrIncorrect = compareBurger(userBurgerOrder, randomBurgerOrder, userBurgerCount, randomBurger);
    int roundScore = calculateTotals(userBurgerOrder, userBurgerCount, orderCorrectOrIncorrect);
    return roundScore;
}