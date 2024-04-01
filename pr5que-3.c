#include<stdio.h>
int main()
{
    int a[10][10], t[10][10], i, j, row, Column;
    
    
    printf("Enter Row & Column : \n");
    scanf("%d %d",&row ,&Column);
    
    printf("Enter Number: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < Column; j++)
            scanf("%d", &a[i][j]);
    }
    printf(" Matrix:: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < Column; j++)
        {
            printf("%d ", a[i][j]);
            t[i][j] = a[j][i];
        }
        printf("\n");
    }
    printf("Tranpose Matrix:: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < Column; j++)
        {
            printf("%d ", t[i][j]);
        }
        printf("\n");
    }
}
