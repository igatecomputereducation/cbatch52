#include<stdio.h>
int main()
{
	int x;
	
	x=1;
	abc:
		printf("%i\n",x);
		x=x+1;
	if(x<=5)
		goto abc;
	
	return 0;
}
