/*Find sum, avg , standard deviation
standard deviation is [sigma(xi-x)^2/n]^1/2 */
#include <stdio.h>
#include <math.h>
void sum(float a,float b,float c,float d,float e)
{
    printf("\n%f",a+b+c+d+e);
}
void average(float a,float b,float c,float d,float e)
{
    printf("\n%f",(a+b+c+d+e)/5);
}
void standardDeviation(float a,float b,float c,float d,float e)
{
    float mean=(a+b+c+d+e)/5;
    float x1=a-mean;
    float x2=b-mean;
    float x3=c-mean;
    float x4=d-mean;
    float x5=e-mean;

    float sumsq=x1*x1 + x2*x2 + x3*x3 +x4*x4 + x5*x5 ;
    float meansum=sumsq/5;

    printf("\n%f",sqrt(meansum));
}


int main()
{
    float a,b,c,d,e;
    printf("Enter 5 Number :");
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    scanf("%f",&d);
    scanf("%f",&e);
    sum(a,b,c,d,e);
    average(a,b,c,d,e);
    standardDeviation(a,b,c,d,e);
    return 0;
}