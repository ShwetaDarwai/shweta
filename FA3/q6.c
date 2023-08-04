//Accept the number of days from user and calculate the charges for the library according to the follwing 1st 5 days=2rs per day,next 5 days=3rs per day,next 5 days=4rs per day,after 15 days=5rs per day.
#include<stdio.h>
int main()
{
	int D,C;
	printf("enter the number D");
	scanf("%d",&D);
	if(D>0 && D<=5){
	C=D*2;
	printf("%d\n",C);
	}
	else if(D>=6 && D<=10){
	C=D*3;
	printf("%d\n",C);
	}
	else if(D>=11 && D<=15){
	C=D*4;
	printf("%d\n",C);
	}
	else if(D>15){
	C=D*5;
	printf("%d\n",C);
	}
	return 0;
}

