//write program to print the value of profit incurred,loss incurred,no profit, no loss
#include<stdio.h>
int main()
{
	int sp,cp,L,P;
	printf("enter a number sp,cp");
	scanf("%d %d",&sp,&cp);
	if(cp<=sp){
	if(cp==sp){
	printf("no profit no loss");
	}
	else{
	P=sp-cp;
	printf("%d\n",P);
	}
	}
	else{
	L=cp-sp;
	printf("%d\n",L);
	}
	return 0;
}
	
	
