#include<stdio.h>
int main()
{
	int n,i;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	if(n<2)
	{
		printf("Not a prime number");
		exit(0);
	}
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("Not a prime number");
			exit(0);
		}
	}
	
	printf("It is a prime number");
	return 0;
}


