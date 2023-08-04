//Write a program to show how consecutive even numbers starting from 2 are summed up until the sum just exceeds 1000 and then print the sum and the number of even numbers added.
#include<stdio.h>
int main()
{
	int n=1000;
	int i=2;
	int sum=0;
	while(sum<=n){
	if(i%2==0){
	sum=sum+i;
	printf("%d\n",i);
	}
	i+=1;
	}
	printf("%d\n",sum);
	return 0;
}
	
