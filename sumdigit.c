#include<stdio.h>
int main(){
	int no,count=0,FD,LD,sum=0;
	printf("\n Enter no:");
	scanf("%d",&no);
	
	LD=no%10;
	FD=no;

	while(no>=10){
		
		
	no=no/10;
	}
	FD=no;
	sum=FD+LD;
	printf("\n sum of first and last digits are %d",sum);
}


