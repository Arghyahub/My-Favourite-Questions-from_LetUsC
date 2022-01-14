// Selection Sort
#include <stdio.h>
int *selectionSort(int * , int);
int main()
{
    int n ;
    printf("Enter number of elements :") ;
    scanf("%d",&n) ;

    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter element :");
        scanf("%d",&arr[i]);
    }

    printf("\nOriginal Array is : ");
    for (int i=0; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }

    // Main part

    int *sort = selectionSort(arr,n);
    printf("\nSorted Array is : ");
    for (int i=0; i<n ; i++)
    {
        printf("%d ",sort[i]);
    }

    return 0;
}

int *selectionSort(int *arr , int n)
{
    for (int i=0; i<=n-2; i++)
    {
        for (int j=i+1; j<=n-1; j++)
        {
            if (arr[i]>arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return arr;
}