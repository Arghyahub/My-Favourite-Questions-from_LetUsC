// Find sum of digits of a 5 digit integer using recursion
#include <stdio.h>
int recur(int n)
{
    if (n<1)
    {
        return 0;
    }
    int last=n%10;
    n=n/10;
    return last + recur(n) ;
}

int main()
{
    int n;
    printf("Enter a 5 digit Number :");
    scanf("%d",&n);
    int sumdigit=recur(n);
    printf("\nThe sum of digit is : %d",sumdigit);
}