// Insertion sort
#include <stdio.h>
int *insertionsort(int *, int ) ;
int main()
{
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];

    for (int i=0; i<n; i++)
    {
        printf("Enter Element : ") ;
        scanf("%d",&arr[i]) ;
    }

    printf("Sorted array : ");
    int *sort=insertionsort(arr,n);
    for (int i=0; i<n; i++)
    {
        printf("%d ",sort[i]) ;
    }

    return 0;
}

int *insertionsort(int *arr, int n)
{
    for (int i=1; i<n; i++)
    {
        int element= arr[i] ;
        int j=i-1 ;
        while (arr[j]>element && j>=0)
        {
            arr[j+1]=arr[j] ;
            j-- ;
        }
        arr[j+1] = element ;
    }

    return arr;
}