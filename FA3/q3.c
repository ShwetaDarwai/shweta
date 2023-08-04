//write program to input electricity unit charges and calculate the total electricity bill according to given condition for 1st 50 unit=rs0.50\unit,nexr 100 unit=rs0.75\unit,for next 100 unit=1.20\unit,for unit above 250=rs1.50\unit,an additional surcharge of 20%is added to bill.
#include<stdio.h>
int main()
{
	int n,u,T;
	printf("enter a number n");
	scanf("%d",&n);
	if(n<=50){
	u=0.50;
	T=(n*0.50)+20/100;
	printf("%d\n",T);
	}
	else if(n>=150){
	u=0.75;
	T=(n*0.75)+20/100;
	printf("%d\n",T);
	}
	else if(n>=250){
	u=1.20;
	T=(n*1.20)+20/100;
	printf("%d\n",T);
	}
	return 0;
}
	

