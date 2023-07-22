#include<stdio.h>
#include<math.h>
int main()
{
	int n,t,ndig,sum;
	
	printf("Enter any natural number:");
	scanf("%i",&n);
	
	t=n;
	for(ndig=0;t!=0;t=t/10)
		ndig=ndig+1;
	
	t=n;
	for(sum=0;t!=0;t=t/10)
		sum=sum+pow(t%10,ndig);

	if(sum==n)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
	
	return 0;
}

