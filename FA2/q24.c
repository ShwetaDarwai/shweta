//write program to take two input and print their difference if the number is greater than the second number otherwise print their sum
#include<stdio.h>
int main()
{
	int a,b,diff,sum;
	printf("enter a number a,b");
	scanf("%d %d",&a,&b);
	if(a>b){
	diff=a-b;
	printf("%d\n",diff);
	}
	else{
	sum=a+b;
	printf("%d\n",sum);
	}
	return 0;
}
	
