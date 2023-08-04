//write program to obtain a 2 numbers a and b and airthmatic operator c and then design calculator depending upon the operator entered by user, c="+" you have to sume of two numbers ans so on..,
#include<stdio.h>
int main()
{
	int a,b,sum,diff,mul,div;
	char o;
	scanf("%c",&o);
	printf("enter a number a,b");
	scanf("%d %d",&a,&b);
	if(o=='+'){
	sum=a+b;
	printf("%d\n",sum);
	}
	else if(o=='-'){
	diff=a-b;
	printf("%d\n",diff);
	}
	else if(o=='*'){
	mul=a*b;
	printf("%d\n",mul);
	}
	else if(o=='%'){
	div=a%b;
	printf("%d\n",div);
	}
	else{
	printf("invalid");
	}
	return 0;
}
