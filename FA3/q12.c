//Find whether a given year is a leap year(Hint. A year is said to be a leap year if it is either divisible by 4 but not by 100 or divisible by 400.)
#include<stdio.h>
int main()
{
	int y;
	printf("enter a number y");
	scanf("%d",&y);
	if(y%4==0 && (y%400==0 || (y%100!=0))){
	printf("leap year");
	}
	else{
	printf("not leap year");
	}
	return 0;
}
