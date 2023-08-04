//In the above question take the first condition as divisibility of year by 100 and write the program the simple input
#include<stdio.h>
int main()
{
	int y;
	printf("enter a number y");
	scanf("%d",&y);
	if(y%100==0){
	printf("its not leap year");
	}
	else if(y%4==0){
	printf("leap year");
	}
	else if(y%400==0){
	printf("leap year");
	}
	else{
	printf("not leap year");
	}
	return 0;
}
