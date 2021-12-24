#include <stdio.h>
int main()
{
    // Convert Decimal to Octal
    int n;
    printf("Enter number : ");
    scanf(" %d",&n);
    
    int octal=0,counter=1;

    while (n>0)
    {
        int last=n%8;
        octal=octal+counter*last;
        counter*=10;
        n=n/8;
    }

    printf("Octal notation is : %d",octal);
    return 0;
}