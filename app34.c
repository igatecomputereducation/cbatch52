#include<stdio.h>
int main()
{
	int ch;
	printf("1.Permanent\n2.Temporary\nEnter your choice [1..2]:");
	scanf("%i",&ch);
	
	if(ch==1)
	{
		printf("Narayana murthi\n");
		printf("Jaladanki");
	}
	if(ch==2)
	{
		printf("Narayana murthi\n");
		printf("c/o igate solutions");
	}
	if(ch<1)
		printf("Invalid choice");
	if(ch>2)
		printf("Invalid choice");
	
	return 0;
}

