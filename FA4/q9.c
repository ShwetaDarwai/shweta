//Write a program to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
#include<stdio.h>
int main()
{
	int a;
	int b;
	int p;
	int q;
	int i=a;
	double sum=(0.0);
	printf("enter the number a,b,p,q");
	scanf("%d %d %d %d",&a,&b,&p,&q);
	while(i<=b){
	if(i%p==0){
	if(i%q!=0){
	sum=sum+i;
	i++;
	}
	else{
	i++;
	}
	}
	else{
	i++;
	}
	}
	printf("%f\n",sum);
	return 0;
}
