#include<stdio.h>
int main()
{
    int a[10][10], sum=0, i, j, row, column,add=0;
    
    printf("Enter Row & Column : \n");
    scanf("%d %d",&row ,&column);
    
    printf("Enter Number: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
            scanf("%d", &a[i][j]);
    }
    printf(" Matrix:: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
  
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
          if(i==(row-1))
          {
              printf("%d ",a[i][j]);
              sum+=a[i][j];
          }
        }
        printf("\n");
    }
    
      for(i = 0; i < row; i++)
    {
        for(j = 0; j < column; j++)
        {
          if(j==(column-1))
          {
              printf("%d ",a[i][j]);
              add+=a[i][j];
          }
        }
        printf("\n");
    }
    
  
    printf("\n Sum Of Row Is %d",sum);
    printf("\n Sum Of Column Is %d",add);
}
