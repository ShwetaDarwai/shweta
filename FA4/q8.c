//Write a program to calculate the sum of the following series where n is input. 1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
#include<stdio.h>
int main()
{
	int i=1;
	int n=4;
	double sum=0.0;
	while(i<=n){
	sum=sum+(1.0/i);
	i++;
	}
	printf("%f\n",sum);
	return 0;
}
