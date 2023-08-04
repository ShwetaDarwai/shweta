//The following rules are use to calculate the bonus for the employees of an oranization 1.if the payment is more that 3000 the bonus amount is fix and it equal to 300, 2.if payment is more than 1600 but less that or equal to 3000 the bonus will be 10% of payment subject to maximum of 250, 3.if payment is less than or equal to 1600 the bonus is 15% of payment subject to minimum of 100
#include<stdio.h>
int main()
{
	int P,B;
	printf("enter the number P");
	scanf("%d",&P);
	if(P>3000){
	B=300;
	printf("%d\n",B);
	}
	else if(P>1600){
	if(P<=3000){
	B=P*0.1;
	if(B>240){
	printf("240\n");
	}
	else{
	printf("%d\n",B);
	}
	}
	}
	else{
	B=P*0.15;
	if(B<100){
	printf("100\n");
	}
	else{
	printf("%d\n",B);
	}
	}
	return 0;
}
	
