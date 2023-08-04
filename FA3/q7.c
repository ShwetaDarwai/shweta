//You have denominations of rupee notes in the following form 1,2,5,10,20,100,200,500,2000 Take any amount from the user and print the minimum number of notes needed to add up to that number.
#include<stdio.h>
int main()
{
	int A,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
	printf("enter a number A");
	scanf("%d",&A);
	if(A>=2000){
	n1=A/2000;
	A=A%2000;
	printf("2000=%d\n",n1);
	}
	if(A>=500){
	n2=A/500;
	A=n2%500;
	printf("500=%d\n",n2);
	}
	if(A>=200){
	n3=(A/200);
	A=(A%200);
	printf("200=%d\n",n3);
	}
	if(A>=100){
	n4=(A/100);
	A=(A%100);
	printf("100=%d\n",n4);
	}
	if(A>=50){
	n5=(A/50);
	A=(A%50);
	printf("50=%d\n",n5);
	}
	if(A>=20){
	n6=(A/20);
	A=(A%20);
	printf("20=%d\n",n6);
	}
	if(A>=10){
	n7=(A/10);
	A=(A%10);
	printf("10=%d\n",n7);
	}
	if(A>=5){
	n8=(A/5);
	A=(A%5);
	printf("5=%d\n",n8);
	}
 	if(A>=2){
	n9=(A/2);
	A=(A%2);
	printf("2=%d\n",n9);
	}
	if(A>=1){
	n10=(A/1);
	A=(A%1);
	printf("1=%d\n",n10);
	}
	return 0;
}

	
	
