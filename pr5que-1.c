#include <stdio.h>
int main()
{
    int arr[50],i, n;

    printf("Enter Size Of The Array : ");
    scanf("%d", &n);

    printf("Enter Elements In Array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nNegative Elements In Array Are : ");
    for(i=0; i<n; i++)
    {
       
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
