#include<stdio.h>
int main()
{
	int amt,fh,th,hd,ff,tw,tn,fv,to,on;
	printf("enter any amount:");
	scanf("%i",&amt);
	fh=amt/500;
	amt=amt%500;
	th=amt/200;
	amt=amt%200;
	hd=amt/100;
	amt=amt%100;
	ff=amt/50;
	amt=amt%50;
	tw=amt/20;
	amt=amt%20;
	tn=amt/10;
	amt=amt%10;
	fv=amt/5;
	amt=amt%5;
	to=amt/2;
	amt=amt%2;
	on=amt;
	printf("Denomination\n----------------\n");
	printf("500x%i\n",fh);
	printf("200x%i\n",th);
	printf("100x%i\n",hd);
	printf("50x%i\n",ff);
	printf("20x%i\n",tw);
	printf("10x%i\n",tn);
	printf("5x%i\n",fv);
	printf("2x%i\n",to);
	printf("1x%i",on);
	return 0;
}





