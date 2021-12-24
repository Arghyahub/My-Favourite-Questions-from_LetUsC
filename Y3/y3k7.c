/*n Produce following output
   1
  2 3
 4 5 6
7 8 9 10
*/


#include <stdio.h>
int main()
{
    int spaces=3, start=1 ,end=1 ;
    for (int i=1; i<=4; i++)
    {
        for (int j=1; j<=spaces; j++)
        {
            printf(" ");
        }
        spaces--;

        for (int k=start; k<=end ;k++)
        {
            printf("%d ",k);
        }

        printf("\n");
        start=end+1;     // shifting start to next value of end
        end=start+i;     // If you see line 1 contains 1 element and 2 contains 2 elements and so on...
                         // Therefore for i+1'th line(next line) I shifted end to i'th position after start
                         // for (i+1)th line the different btw start and end is i

    }
}