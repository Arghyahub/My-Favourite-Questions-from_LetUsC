#include<stdio.h>
int main()
{
    // sum of first and last num
    printf("enter num : ");
    int n;
    scanf("%d",&n);
    int last=n%10;
    printf("%d \n",last);
    while (n>9)
    {
        n=n/10;
    }
    int sum=n+last;
    printf("Sum of first and last is :%d",sum);
    return 0;
}