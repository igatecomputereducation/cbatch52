/*
Descr: To find biggest number
Author: subbu
Date: 07/08/2023
Version 1.0
Loc: TCS, Bangalore
*/
#include<stdio.h>
int main()
{
	/*Declaration of variables*/
	int x,y;
	
	//Taking input
	printf("Enter 2 integers\n");
	scanf("%i%i",&x,&y);
	
	//logic to print biggest number
	if(x==y)
		printf("Equals");
	else if(x>y)
		printf("Biggest number %i",x);
	else
		printf("Biggest number %i",y);
		
	return 0;
}

