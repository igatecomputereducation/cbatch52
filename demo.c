#include<stdio.h>
int main()
{
	int a,b,c;
	a=10>=10 && 40>=80 || 40>=80;
	b=40!=80 && 50<=20 && 60>20; 
	c=50!=70 || 20>50 && 50>30;
	printf("%i\n%i\n%i",a,b,c);
	return 0;
}
