#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter a number into a:");
	scanf("%i",&a);
	printf("enter a number into b:");
	scanf("%i",&b);
	temp=a;
	a=b;
	b=temp;
	printf("Value in a %i\n",a);
	printf("Value in b %i",b);
	return 0;
}
