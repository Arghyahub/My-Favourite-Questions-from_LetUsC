//check leap year
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Num : ");
    scanf("%d",&n);

    if (n%400==0)
    {
        printf("\n%d is a leap year ",n);
    }
    else if (n%100==0)
    {
        printf("\n%d is not a leap year ",n);
    }
    else if (n%4==0)
    {
        printf("\n%d is a leap year ",n);
    }
    else 
    {
        printf("\n%d is not a leap year",n);
    }
    return 0;
}