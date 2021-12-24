#include <stdio.h>
int main(){
    // Reversing a Number
    printf("Enter a number :");
    int num;
    scanf("%d",&num);
    int revnum=0;
    while (num>0)
    {
        int last=num%10;
        revnum=revnum*10+last;
        num=num/10;
    }

    printf("Reverse Num is : %d",revnum);

    return 0;
}