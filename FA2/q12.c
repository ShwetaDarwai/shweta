//write progrma to chech whether last digit of number is divisible by 3 or not 
#include<stdio.h>
int main()
{
	int n,d;
	printf("enter a number n");
	scanf("%d",&n);
	d=n%10;
	if(d%3==0){
	printf("last digit is divisible by3");
	}
	else{
	printf("not divisible by 3");
	}
	return 0;
}
