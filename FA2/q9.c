//write program to check weather number is largest 3 digit number.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n>998){
	if(n<1000){
	printf("no is smallest 3 digit no");
	}
	else{
	printf("no is not smallest 3 digit no");
	}
	}
	else{
	printf("invalid");
	}
	return 0;
}

