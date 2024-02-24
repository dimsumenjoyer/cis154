/*
Victor Van
00319912
Problem Set 6.4
C - Professor Penta
2/24/2024, Due: 3/26/2024
*/

#include <stdio.h>

int randomNumberGenerator(void);
void guessingGame(int r);
void userInput(void);

int main(void)
{
    srand(time(NULL));
    guessingGame(randomNumberGenerator());
}

int randomNumberGenerator(void)
{
    int r = rand() % 10 + 1;
    return r;
}

void guessingGame(int r)
{
    printf("GUESSING GAME:\n");
    int i = 3;
    while (i != 0)
    {
        int guess;
        printf("Guesses remaining: %d\nGuess a number between 1-10:\n", i);
        scanf("%d", &guess);
        if (guess != r)
        {
            printf("Your guess is incorrect! You have %d guess(es) remaining.\n", i - 1);
            i--;
            if (i == 0)
            {
                userInput();
            }
        }
        else
        {
            printf("Your guess is correct!\n");
            userInput();
        }
    }
}

void userInput(void)
{
    int user_input;
    do {
        printf("Would you like to play again? (0/1)\n");
        scanf("%d", &user_input);
        switch (user_input)
        {
            case 0:
                printf("Goodbye world.\n");
                break;
            case 1:
                printf("Welcome back!\n");
                guessingGame(randomNumberGenerator());
                break;
            default:
                printf("Error: Invalid Input. Please try again.\n");
                break;
        }
        } while (user_input != 0 && user_input != 1);
}