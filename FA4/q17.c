//Write a program to find out the sum of first N terms of the following series 5+55+555+5555+.... up to N terms.
#include<stdio.h>
int main()
{
	int n;
	int i=1;
	int sum=0;
	int a=0;
	printf("enter the value of n");
	scanf("%d",&n);
	while(i<=n){
	sum=sum*10+5;
	a=a+sum;
	i++;
	}
	printf("%d\n",a);
	return 0;
}
