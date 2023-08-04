//write program to check whether a given number is 1 digit or 2 digit or 3 digit or more than 3 digit.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n<=9){
	printf("n is 1 digit");
	}
	else if(n<=99){
	printf("n is 2 digit");
	}
	else if(n<=999){
	printf("n is 3 digit");
	}
	else{
	printf("n is more than 3 digit");
	}
	return 0;
}
