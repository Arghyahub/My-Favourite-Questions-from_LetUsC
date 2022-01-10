// find prime factors of given integer using recursion
#include <stdio.h>
int prime(int n,int counter)
{
    if (n==1)
    {
        return 0;
    }
    if (n%counter==0)
    {
        n=n/counter;
        printf("%d ",counter);
        prime(n,counter) ;
    }
    else
    {
        counter++;
        prime(n,counter) ;
    }
}
int main()
{
    int n,counter=2 ;
    printf("Enter Integer :");
    scanf("%d",&n);
    prime(n,counter);
    return 0;
}