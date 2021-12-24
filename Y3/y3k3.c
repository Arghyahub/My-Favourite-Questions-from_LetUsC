// There are total 21 matchsticks and player can pick only 1 or 2 or 3 or 4 matchstick at a time
// and the person to pick the last matchstick looses
// Make a Program such that the computer wins every time


#include <stdio.h>
int main()
{
    printf("\n*****\nThere are 21 Matchsticks \nAnd you can pick only 1 or 2 or 3 or 4 Matchstick at a time\n");
    printf("Whoever is forced to pick the last Matchstick Loses **\n*****\n");

    /*
    The trick is to finish upto 20 Matchsticks so the 1 remaining is for the player
    so adjust the value taken by computer such that sum of Player's and Computer's Matchstick is 5
    4 rounds of 5 that is 4*5=20 thus the last one remaining will be for the Player
    */

    int total=21, player, comp;

    while (1)
    {

        printf("\nChoose Matchstick 1-2-3-4 at a time : ");
        scanf("%d",&player);

        // Checking if value entered is correct and showing warning
        if (player>4 || player<1){
            printf("\n\n***Wrong Input***\nTry again : Enter 1 or 2 or 3 or 4\n\n");
            continue;
        }

        total=total-player;
        printf("Total Matchstick left : %d\n\n",total);


        comp=5-player;
        printf("\nComputer Chose %d Matchsticks\n",comp);
        total=total-comp;

        printf("Total Matchstick left : %d\n\n",total);

        if (total==1)
        {
            printf("You Loose , only 1 Matchstick left\n\n");
            break;
        }
    }

    return 0;
}