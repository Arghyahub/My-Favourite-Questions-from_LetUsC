#include <stdio.h>
#include <math.h>
// Adding 1 to each digit

int main(){
    printf("Enter Num : ");
    int n;
    scanf("%d",&n);
    int sum=0,count=1;

    while (n>0){
        int last=n%10;
        n=n/10;
        sum=sum+(last+1)*count;
        count*=10;

    }
    printf("new num is :%d",sum);
    return 0;
}
