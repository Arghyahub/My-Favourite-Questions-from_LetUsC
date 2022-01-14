// Write a function that interchanges all odd and even elements of an array
#include <stdio.h>
int *changeArray(int *, int ) ;
int main()
{
    int n;
    printf("\nEnter Number of elements : ");
    scanf("%d",&n) ;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter Element : ");
        scanf("%d",&arr[i]) ;
    }

    printf("\nOriginal Array :") ;
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]) ;
    }
    

    int *interarr = changeArray(arr,n) ;

    printf("\nInterchanged Array :") ;
    for (int i=0; i<n; i++)
    {
        printf("%d ",interarr[i]) ;
    }
    return 0;
}

int *changeArray(int *arr, int n)
{
    for (int i=0; i<n-1; i+=2)
    {
        int temp= arr[i];
        arr[i]=arr[i+1] ;
        arr[i+1]=temp ;
    }
    return arr;
}