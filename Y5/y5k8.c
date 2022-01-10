/*Three points of a triangle A(x1,y2) B(x2,y2) C(x3,y3) are given
use a function to determine their distance
and use it to develop a funtion to determine their Area
--> check if a given point is inside the triangle
    or outside the tringle 
*/
#include <stdio.h>
#include <math.h>
float dist(float,float,float,float);
float area(float,float,float,float,float,float) ;

int main()
{
    float x1,x2,x3,y1,y2,y3 ;
    printf("\nEnter coordinate points (x1,y1): ") ;
    scanf("%f %f",&x1,&y1) ;
    printf("\nEnter coordinate points (x2,y2): ") ;
    scanf("%f %f",&x2,&y2) ;
    printf("\nEnter coordinate points (x3,y3): ") ;
    scanf("%f %f",&x3,&y3) ;

    float arr=area(x1,y1,x2,y2,x3,y3) ;
    printf("\nThe area is : %f",arr) ;

    printf("\nEnter the extra point (x,y ):") ;
    float p1,p2;
    scanf("%f %f",&p1,&p2) ;

    float a1 = area(p1,p2,x2,y2,x3,y3) ;
    float a2 = area(x1,y1,p1,p2,x3,y3) ;
    float a3 = area(x1,y1,x2,y2,p1,p2) ;

    if (round(a1+a2+a3)==round(arr))
    {
        printf("\nThe point lies inside the Triangle ");
    }
    else 
    {
        printf("\nThe point lies outside the Triangle ");
    }
    return 0;
}

float dist(float a1, float a2, float b1, float b2)
{
    float num=(a1-a2)*(a1-a2) + (b1-b2)*(b1-b2) ;
    float root = pow(num,0.5) ;
    return root ;
}

float area(float x1,float y1,float x2,float y2,float x3,float y3)
{
    float a=dist(x1,x2,y1,y2) ;
    float b=dist(x2,x3,y2,y3) ;
    float c=dist(x3,x1,y3,y1) ;

    float s = (a+b+c)/2 ;
    float unsq= s*(s-a)*(s-b)*(s-c) ;
    float area = pow(unsq,0.5) ;
    return area ;
}
