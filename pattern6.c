#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=5;i++)
  {
    printf("\n");
    for(j=5;j>=i;j--)
    {
    	if(j%2!=0){
    		printf("1");
		}else{
			printf("0");
		}
//      printf("%d",i);
    }
  }
}
