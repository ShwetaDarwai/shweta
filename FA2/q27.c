//write program to obtain length(L) and breadth(B) of rectangle and check whether its area is greater or perimeter is greater or both are equal.
#include<stdio.h>
int main()
{
	int l,b,A,P;
	printf("enter a number l,b");
	scanf("%d %d",&l,&b);
	A=l*b;
	P=2*(l+b);
	if(A==P){
	printf("A & P both are equal");
	}
	else if(A>P){
	printf("A is greater");
	}
	else{
	printf("P is greater");
	}
	return 0;
}
