#include<stdio.h>
int main()
{
    // 100 50 10 notes are available find num of notes for each
    int n;
    printf("Enter Num :");
    scanf("%d",&n);

    int no100=n/100;
    n=n%100;
    int no50=n/50;
    n=n%50;
    int no10=n/10;

    printf("Number of 100 notes :%d\n",no100);
    printf("Number of 50 notes :%d\n",no50);
    printf("Number of 10 notes :%d\n",no10);

    return 0;
}