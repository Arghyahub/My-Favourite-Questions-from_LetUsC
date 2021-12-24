#include <stdio.h>
int main()
{
    // Adding digits of a number
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int sum=0;
    while (n>0)
    {
        int last=n%10;
        sum+=last;
        n=n/10;
    }
    printf("Sum of all digits is :%d",sum);

}