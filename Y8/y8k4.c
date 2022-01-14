// Use Sieve Eratosthenes Method to find Prime Numbers upto 100
#include <stdio.h>

int main()
{
    printf("\nRan sucessfully\n");
    int arr[101];
    arr[0]=0;
    arr[1]=0;
    for (int i=2; i<101; i++)
    {
        arr[i]=1;
    }
    
    for (int i=2 ; i<=100 ; i++)
    {
        if (arr[i]==1)
        {
            for (int j=2; i*j<=100; j++)
            {
                arr[i*j]=0;
            }
        }
    }

    printf("\nPrime Numbers are : ");
    for (int i=0; i<101; i++)
    {
        if (arr[i]!=0)
        {
            printf("%d ",i) ;
        }
    }
    return 0;
}