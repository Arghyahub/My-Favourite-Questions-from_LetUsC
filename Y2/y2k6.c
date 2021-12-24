//Check if entered character is uppercase or lowercase
#include <stdio.h>
int main(){
    printf("Enter Character :");
    char c;
    scanf("%c",&c);
    int n=c;
    if (n>=65 && n<=90){
        printf("\nEntered Character is Uppercase");
    }
    else if (n>=97 && n<=122){
        printf("\nEntered Character is Lowercase");
    }
    else {
        printf("\nEntered Character is special Character");

    }


    return 0;
}