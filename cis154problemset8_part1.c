#include <stdbool.h>
#include <stdio.h>

int isAbecedarian(char word[], int wordMagnitude);

int main(void)
{
    char name[10] = "Victor";
    int wordMagnitude = sizeof(name) / sizeof(name[0] - 1);
    bool test = isAbecedarian(name, wordMagnitude);
    printf("%d", test);
}

int isAbecedarian(char word[], int wordMagnitude)
{
    for (int i = 0; i < wordMagnitude; i++)
    {
        if (word[i] > word[i + 1])
        {
            return 0;
        }
    }
    return 1;
    //((quantumCode > 64 && quantumCode < 90 ) || (quantumCode > 96 && quantumCode < 123))
}