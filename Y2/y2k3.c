/* As per Gregorian Callendar 01/01/01 was a Monday
   User will input a Year and find what day it was on 1st January of that year
*/
#include <stdio.h>
int leap(int yr)
{
    if (yr%400==0){
        return 1;
    }
    else if (yr%100==0){
        return 0;
    }
    else if (yr%4==0){
        return 1;
    }
    else {
        return 0;
    }
}
int main(){
    int year=0,days=0;
    printf("Enter Year :");
    scanf("%d",&year);
    int n=leap(4);

    for (int i=1; i<year ; i++){
        if (leap(i)==1)
        {
            days=days+366;
        }
        else if (leap(i)==0){
            days=days+365;
        }
    
    }
    
    if (days%7==0)
    {
        printf("\non %d 1st january is :Monday\n",year);
    }
    if (days%7==1)
    {
        printf("\non %d 1st january is :Tuesdsy\n",year);
    }
    if (days%7==2)
    {
        printf("\non %d 1st january is :Wednesday\n",year);
    }
    if (days%7==3)
    {
        printf("\non %d 1st january is :Thursday\n",year);
    }
    if (days%7==4)
    {
        printf("\non %d 1st january is :Friday\n",year);
    }
    if (days%7==5)
    {
        printf("\non %d 1st january is :Saturday\n",year);
    }
    if (days%7==6)
    {
        printf("\non %d 1st january is :Sunday\n",year);
    }


    return 0;
}