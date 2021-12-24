/* Print all ASCII values and letters; from A-Z and a-z
 To make it look good i'm writing two character in one line (optional)*/
#include <stdio.h>
int main(){
    int c=67;
    
    for (int i=65; i<=90; i+=2){
        printf("%c ~ %d      %c ~ %d \n",i,i,i+1,i+1);
    }
    printf("\n");
    for (int i=97; i<=122; i+=2){
        printf("%c ~ %d      %c ~ %d \n",i,i,i+1,i+1);
    }

    return 0;
}
// 
// 