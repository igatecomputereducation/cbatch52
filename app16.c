#include<stdio.h>
int main()
{
	int cmr,pmr,nu;
	float bill;
	printf("Enter current month reading:");
	scanf("%i",&cmr);
	printf("Enter previous month reading:");
	scanf("%i",&pmr);
	nu=cmr-pmr;
	bill=nu*7.50;
	printf("Number of units consumed %i\n",nu);
	printf("Bill to pay %.2f",bill);
	return 0;
}
