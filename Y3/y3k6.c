/* Produce following output
A B C D E F G F E D C B A
A B C D E F   F E D C B A
A B C D E       E D C B A
A B C D           D C B A
A B C               C B A
A B                   B A
A                       A
*/

#include <stdio.h>
int main()
{
    int start=65; int end =71;
    for (int i=0; i<7 ; i++){
        
        for (int j=start; j<=end; j++)
        {
            printf("%c",j);                 // add 1 space after %c for better representation
        }

        for (int k=0; k<(2*i-1); k++)
        {
            printf(" ");                    // add 1 space extra for better representation
        }

        for (int l=end; l>=start; l--)
        {
            if (l==71)
                continue;
            printf("%c",l);                 // add 1 space after %c for better representation
        }

        end--;
        printf("\n");
    }
    return 0;
}