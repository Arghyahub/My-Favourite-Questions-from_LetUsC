// check Armstrong Number

#include <stdio.h>
int main()
{
    // Sol :int abc; // if abc==a^3+b^3+c^3 than it is an armstrong number
    int n,arm=0;
    printf("Enter value of n :");
    scanf("%d",&n);
    int m=n;
    while (m>0)
    {
        int last=m%10;
        arm+=last*last*last;
        m=m/10;
    }
    
    if (n==arm)
    {
        printf("%d is a Armstrong Number",n);
    }
    else
    {
        printf("%d is not a Armstrong Number",n);
    }
}