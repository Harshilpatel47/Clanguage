#include<stdio.h>
int main()
{
    int a[10][10], i, j, max,n;
    
    
    printf("Enter size of the array : ");
    scanf("%d", &n);
    
    printf("Enter any matrix: ");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    }
    max = a[0][0];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(max<a[i][j])
                max = a[i][j];
        }
    }
    printf("\nLargest Element = %d", max);
}
