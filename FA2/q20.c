//a shop will give a discount of 10% if cost of purchased quantity is more than 1000, ask for quantity suppose one unit will cost 100 judge & write program print toatal cost for user.
#include<stdio.h>
int main()
{
	int PQ,D,T;
	printf("enter a number PQ");
	scanf("%d",&PQ);
	if(PQ>=1000){
	D=PQ*0.1;
	T=PQ-D;
	printf("%d/n",T);
	}
	else{
	printf("shop will not give discount");
	}
	return 0;
}
	
