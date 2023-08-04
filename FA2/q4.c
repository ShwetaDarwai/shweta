//write program to selling price and cost price as input calculate profit precentage 
#include<stdio.h>
int main()
{
	int sp,cp,P,pp;
	printf("enter a number sp,cp");
	scanf("%d %d",&sp,&cp);
	if(sp>cp){
	P=sp-cp;
	pp=(P*100)/cp;
	printf("%d\n",pp);
	}
	else{
	printf("invalid");
	}
	return 0;
}
