#include<stdio.h>
int main()
{
	int mat,phy,che,tot;
	float avg;
	mat=90;
	phy=80;
	che=75;
	tot=mat+phy+che;
	avg=tot/3.0;
	printf("Total marks %i\n",tot);
	printf("Average marks %f",avg);
	return 0;
}
