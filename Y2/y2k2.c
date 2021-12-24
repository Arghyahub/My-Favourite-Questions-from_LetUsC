/*Sides of a triangle are entered, check if it is a valid Triangle
Sum of two sides is greater than the third side*/
#include <stdio.h>
int main(){
    float s1,s2,s3;
    printf("Enter three sides : ");
    scanf("%f %f %f",&s1,&s2,&s3);

    if ((s1+s2>s3) || (s1+s3>s2) || (s3+s2>s1)){
        printf("This is a valid triangle");
    }
    else{
        printf("This is not a valid triangle");
    }
}