// Check if a Matrix is symmetric
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number n to create nxn Matrix : ") ;
    scanf("%d",&n) ;
    int arr[n][n] ;

    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]) ;
        }
    }

    
    int flag=0 ;
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<n; j++)
        {
            if (arr[i][j]!=arr[j][i])
            {
                flag = 1;
                printf("\nThe Matrix is not symmetric..");
                return 0 ;
            }
        }
    }

    printf("\nThe Matrix is Symmetric ...") ;

    return 0;
}