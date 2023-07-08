#include<stdio.h>
int main()
{
	int n,gr;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	if(n%9==0)
		gr=9;
	else
		gr=n%9;
		
	switch(gr)
	{
		case 1:
		case 9:
			printf("Lucky number");
			break;
		case 5:
		case 7:
			printf("Moderate number");
			break;
		default:
			printf("Better change number");
	}
	
	return 0;
}
