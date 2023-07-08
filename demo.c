#include<stdio.h>
int main()
{
	int num=20;
	switch(num+15)
	{
		case 25:
			printf("one\n");
			break;
		case 35:
			printf("two\n");
			break;
		case 50:
			printf("three\n");
			break;
		default:
			printf("four");
	}
	return 0;
}


