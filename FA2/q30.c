//write program to check whether number is negative positive or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n==0){
	printf("n is zero");
	}
	else if(n>0){
	printf("n is positive");
	}
	else if(n<0){
	printf("n is negative");
	}
	else{
	printf("invalid");
	}
	return 0;
}
	
