//write program to print name of days(input a no.from users in a range 0 to 6 and print monday for 0,tue for 1,so on)
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n==0){
	printf("mon");
	}
	else if(n==1){
	printf("tue");
	}
	else if(n==2){
	printf("wed");
	}
	else if(n==3){
	printf("thu");
	}
	else if(n==4){
	printf("fri");
	}
	else if(n==5){
	printf("sat");
	}
	else if(n==6){
	printf("sun");
	}
	return 0;
}
	
