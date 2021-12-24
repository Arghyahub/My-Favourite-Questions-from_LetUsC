// Check if three coordinate points are collinear or not
#include <stdio.h>
#include <math.h>

float distance(float a1,float b1,float a2, float b2)
{
    // For method 1
    float a=pow((a1-a2),2);
    float b=pow((b1-b2),2);
    
    float dist=pow((a+b),0.5);
    return dist;
}

float slope(float a1,float b1,float a2, float b2)
{
    // For method 2
    float b=b1-b2;
    float a=a2-a1;
    return (b/a);
}
int main()
{
    // 1st method ~ Distance Method:
    float x1,x2,x3,y1,y2,y3;
    printf("Enter coordinate points x1 y1 :");
    scanf("%f %f",&x1,&y1);
    printf("Enter coordinate points x2 y2 :");
    scanf("%f %f",&x2,&y2);
    printf("Enter coordinate points x3 y3 :");
    scanf("%f %f",&x3,&y3);

    float d1=distance(x1,y1,x2,y2);
    float d2=distance(x2,y2,x3,y3);
    float d3=distance(x1,y1,x3,y3);

    if ((d1+d2==d3) || (d2+d3==d1) || (d1+d3==d2))
    {
        printf("\nEntered Points are Collinear ");
    }
    else 
    {
        printf("\nEntered Points are not Collinear ");
    }

    // Method 2 ~ Slope Method
    printf("\nBy Slope Method :\n");
    float slope1=slope(x1,y1,x2,y2);
    float slope2=slope(x1,y1,x3,y3);
    if (slope1==slope2)
    {
        printf("\nPoints are collinear ");
    }
    else 
    {
        printf("\nPoints are Non collinear");
    }

    return 0;
}