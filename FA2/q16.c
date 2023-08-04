//write program to check whether number entered is 3 digit or not.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n>=100){
	if(n<=999){
	printf("no is 3 digit");
	}
	else{
	printf("no is not 3 digit");
	}
	}
	else{
	printf("invalid");
	}
	return 0;
}
