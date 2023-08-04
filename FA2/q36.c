//Write program to accept the cost price of bike and display the road tax to be paid accoding to following criteria CP>=10,000-tax=15%,CP>50,000 & <=10,000-tax=10%,CP<50,000-tax=5%
#include<stdio.h>
int main()
{
	int cp,tax;
	printf("enter a number cp");
	scanf("%d",&cp);
	if(cp>10000){
	tax=(15*cp)/100;
	printf("%d\n",tax);
	}
	else if(cp>50000){
	if(cp<=10000){
	tax=(10*cp)/100;
	printf("%d\n",tax);
	}
	}
	else if(cp<=50000){
	tax=(5*cp)/100;
	printf("%d\n",tax);
	}
	else{
	printf("invalid");
	}
	return 0;
}
	
	
