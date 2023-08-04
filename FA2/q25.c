//write program to obtain a number N and increment its value by 1 if the number is divisible by 4 otherwise decrement its value by 1
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n%4==0){
	printf("%d\n",n+1);
	}
	else{
	printf("%d\n",n-1);
	}
	return 0;

}
