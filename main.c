#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int random,guess,no_guesses;
    time_t t;
    // Initialization of random guess
    srand((unsigned) time(&t));

    //get the guess number
    random = rand() % 10;
    printf("\nThis is a Guessing game.\n");
    printf("\nI have taken a number between 0-10, you must guess. You have 5 chances");
    for(no_guesses=5; no_guesses>0; no_guesses--)
    {
        printf("\nYou have %d guess left",no_guesses);
        printf("\nEnter a guess number:");
        scanf("%d",&guess);
        if(guess == random)
        {
            printf("\nCongratulations You Guessed It!");
            break;
        }
        else if(guess < 0 || guess > 10)
        {
            printf("\nI said the number is between 0 and 20");
        }
        else if(guess < random)
        {
            printf("\nSorry it is wrong, My number is greater than this!");
        }
        else if(guess > random)
        {
            printf("\nSorry it is wrong, My number is lees than this!\n");
        }
    }
    printf("\nMy number was %d\n",random);
}
