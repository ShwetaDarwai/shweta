//Write a program to show how the sum of the digits of a given number can be obtained. (Input the number from the user)
#include<stdio.h>
int main()
{
	int n,r;
	int sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(n>0){
	r=n%10;
	sum=sum+r;
	n=n/10;
	}
	printf("%d\n",sum);
	return 0;
}
	
