#include <stdio.h>

int main()
{

	float GrossPayment, basic, da, hra,ta, da1, hra1,ta1;

	printf("Enter basic salary : ");
	scanf("%f", &basic);

	printf("Enter DA : ");
	scanf("%f", &da1);

	printf("Enter HRA : ");
	scanf("%f", &hra1);
	
	printf("Enter Ta : ");
	scanf("%f", &ta1);

	da = (da1 *basic) / 100;
	hra = (hra1 *basic) / 100;
	ta = (ta1 *basic) /100;

	GrossPayment = basic + da + hra + ta;

	printf("\nGross Salary of an Employee:%f\n", GrossPayment);
}



