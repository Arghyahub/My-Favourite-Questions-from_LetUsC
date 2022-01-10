// find binary equivalent of na number using recursion
#include <stdio.h>
void binarynum(int num)
{
    if (num<=0)
    {
        return;
    }
    binarynum(num/2);
    printf("%d ",num%2) ;
}

int main()
{
    int num;
    printf("\nEnter an positive int :");
    scanf("%d",&num);
    printf("\nThe binary equivalent is :");
    binarynum(num);
    return 0; 
}