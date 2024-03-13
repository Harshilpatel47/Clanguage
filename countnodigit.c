#include<stdio.h>
int main(){
	int no,count=0,r,sum=0;
	printf("\n Enter no:");
	scanf("%d",&no);
	
	while(no>0){
		r=no%10;
		count++;
	    no=no/10;
	}
	printf("\n no of digits are %d",count);
}


