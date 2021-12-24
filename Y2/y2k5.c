//Center and radius of a circle is given find if a given point
//lies in the circle,outside the circle or on the circle

#include <stdio.h>
#include <math.h>

int main()
{
    float c1,c2, x,y;
    float r;
    printf("Enter Coordinates of Center :");
    scanf("%f %f",&c1,&c2);
    printf("Enter Radius :");
    scanf("%f",&r);
    
    printf("\nEnter Coordinates of Point :");
    scanf("%f %f",&x,&y);

    float a=pow((x-c1),2);
    float b=pow((y-c2),2);

    float dist=sqrt(a+b);

    if (dist==r)
    {
        printf("\nPoint lies on the Circle ");
    }
    else if (dist>r)
    {
        printf("\nPoint lies outside the Circle ");
    }
    else
    {
        printf("\nPoint lies inside the Circle ");
    }

    return 0;
}