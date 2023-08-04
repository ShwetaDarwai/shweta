//write program to check number weather number is smallest 4 digit number
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n>999){
	if(n<1001){
	printf("no is smallest 4 digit no");
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("no is not smallest 4 digit no");
	}
	return 0;
}

