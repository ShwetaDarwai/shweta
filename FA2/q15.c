//write program to input th marks of two students in 5 subject and check who is topper.
#include<stdio.h>
int main()
{
	int a,b,c,d,e,p,q,r,s,t,M,N,T;
	printf("enter a number a,b,c,d,e,p,q,r,s,t,T");
	scanf("%d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&p,&q,&r,&s,&t,&T);
	M=(a+b+c+d+e)*100/T;
	N=(p+q+r+s+t)*100/T;
	if(M>N){
	printf("M is topper");
	}
	else{
	printf("N is topper");
	}
	return 0;
}

