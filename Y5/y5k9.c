/*Find gcd using uclids alogorithm
for eg 1980 and 1617
1980/1617 = 1 + 368
1617/368 = 4 +165
368/165 = 2 +33
165/33 = 5 + 0
Therefore 33 is the gcd of 1980 and 1617*/
#include <stdio.h>

int gcdnum(int big , int small)
{
    int quotient = big/small ;
    int reminder = big%small ;
    if (reminder==0)
    {
        return small ;
    }    
    else
    {
        gcdnum(small,reminder) ;
    }
}

int main()
{
    int gcd=gcdnum(1980,1617);
    printf("%d ",gcd) ;
    return 0;
}