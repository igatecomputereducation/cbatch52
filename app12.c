#include<stdio.h>
int main()
{
	int hei,bre;
	float area;
	printf("Height:");
	scanf("%i",&hei);
	printf("Breadth:");
	scanf("%i",&bre);
	area=1.0/2.0*hei*bre;
	printf("Area of right angle triangle %f",area);
	return 0;
}
