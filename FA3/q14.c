//In above question take the first condition as divisiblility of year by 400 and write the program
#include<stdio.h>
int main()
{
	int y;
	printf("enter a number y");
	scanf("%d",&y);
	if(y%400==0){
	printf("leap year");
	}
	else if(y%100!=0){
	printf("leap year");
	}
	else if(y%4==0){
	printf("leap year");
	}
	else{
	printf("not leap year");
	}
	return 0;
}
