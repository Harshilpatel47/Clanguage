#include<stdio.h>
int main()
{
  int i,j;
  
  for(i=1;i<=5;i++)
  {
  	char ch='A'+i;
    printf("\n");
    for(j=1;j<=i;j++)
    {
      printf("%c",(ch-j));
    }
  }
  
}
