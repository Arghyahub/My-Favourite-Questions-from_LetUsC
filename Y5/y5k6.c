//Print 25 terms of fibonacci series using recursion
#include <stdio.h>

void fib(int num, int first, int sec)
{
    if (num==0)
    {
        return;
    }
    printf("%d ",first);
    fib(num-1,sec,first+sec) ;
}

int main()
{
    int first=0, sec=1;
    int num=25;
    fib(num,first,sec);
    return 0;
}