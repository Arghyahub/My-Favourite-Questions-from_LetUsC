#include <stdio.h>
/* 52% of total population is male
total literate is 48%
literate men is 35% of total
total=80,000
find total literate men and women
*/
int main()
{
    int total=80000;
    int totalmen=total*0.52;
    int totalwom=total-totalmen;
    int totalliter=total*0.48;

    int litermen=total*0.35;
    int literwom=totalliter-litermen;

    printf("Number of literate men is :%d \nNumber of Literate Women is :%d",litermen,literwom);


    return 0;
}