// write a program to print all prime numbers from 1 to 300
#include <stdio.h>
#include <math.h>
int main()
{
    /* To make the program efficient we have to check upto the square root of the given number
       if the number n is not divisible by [2,3,4,....,sqrt(n)] Then n is a prime number*/
    printf("\nPrime Numbers from 1 to 300 are : \n");

    for (int i=2; i<=300; i++)   // This selects the number
    {
        int counter=0;           // Puts counter=0 for each number
        float k=sqrt(i);

        for (int j=2; j<=k ;j++)
        {
            if (i%j==0)
            {
                counter=1;      // If the number is divisible then puts counter=1
                break;
            }
        }

        if (counter==0)         // If counter==0 then it means the number is not divisible
        {
            printf("%d is a prime Number \n",i); 
        }
    }
    return 0;
}