// Bubble Sort
#include <stdio.h>
int *bubbleSort(int *, int ) ;
int main()
{
    int n;
    printf("Enter size of Array : ");
    scanf("%d",&n);
    int arr[n];
    for (int i=0; i<n; i++)
    {
        printf("Enter Element : ");
        scanf("%d",&arr[i]) ;
    }

    printf("\nOriginal Array : ");
    for (int i=0; i<n; i++)
    {
        printf("%d ",arr[i]) ;
    }

    int *sort=bubbleSort(arr,n) ;
    printf("\nSorted Array : ");
    for (int i=0; i<n; i++)
    {
        printf("%d ",sort[i]) ;
    }

    return 0;
}

int *bubbleSort(int *arr, int n)
{
    for (int i=0; i<n; i++)
    {
        for (int j=0; j<=n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp = arr[j] ;
                arr[j]=arr[j+1] ;
                arr[j+1]=temp ;
            }
        }
    }
    return arr;
}
