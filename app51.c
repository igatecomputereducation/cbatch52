#include<stdio.h>
int main()
{
	int mat,phy,che;
	
	printf("Marks in maths, physics and chemistry\n");
	scanf("%i%i%i",&mat,&phy,&che);
	
	if(mat>=35 && phy>=35 && che>=35)
		printf("Pass");
	else
		printf("Failed");
	
	
	return 0;
}
