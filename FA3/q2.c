//validate a given year(hint year in date must be greater than 0) the month between lie 1 to 12, day must be lie between 1 to 31 depending upon the number.
#include<stdio.h>
int main()
{
int y,d,m;
	printf("enter the number y,d,m");
	scanf("%d %d %d",&y,&d,&m);
	if(y>0){
	if(d>1){
	if(d<31){
	if(m>=1){
	if(m<=12){
	printf("valid year,date,month");
	}
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	}
	else{
	printf("invalid");
	}
	}
	return 0;
}
