#include<stdio.h>
int main()
{
	float cir,area,rad;
	printf("Radius:");
	scanf("%f",&rad);
	area=3.14*rad*rad;
	cir=2*3.14*rad;
	printf("Area of circle %f\n",area);
	printf("Circumfarence of circle %f",cir);
	return 0;
}
