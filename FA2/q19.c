//write program to calculate the sum of two given integers however if the sum is between 15 to 20 it will return 20.
#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter a number");
	scanf("%d %d",&a,&b);
	sum=a+b;
	if(sum<=20){
	if(sum>=15){
	printf("20");
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	return 0;
}
