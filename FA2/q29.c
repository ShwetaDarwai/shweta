//write program to input the month number and print number of days in months.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n==1 ||n==3||n==5||n==7||n==8||n==10||n==12){
	printf("31 days");
	}
	else if(n==4||n==6|| n==9||n==11){
	printf("30 days");
	}
	else if(n==2){
	printf("28 or 29 days");
	}
	else{
	printf("invalid");
	}
	return 0;
}
	
