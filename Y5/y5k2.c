/* 12=2*2*3
 Find all the prime factors of a given number */

#include <stdio.h>
#include <math.h>
void primefactors(int n)
{
    int div=2;
    for ( ; n>1; div++)
    {
        while (n%div==0)
        {
            printf("%d ",div) ;
            n/=div;
        }
    }
}

int main()
{
    int num;
    printf("Enter number :");
    scanf("%d",&num);

    primefactors(num);

    return 0;
}