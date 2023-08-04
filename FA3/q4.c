//Write program to calculate the electricity bill (accept a number of unit from user) according to the follwing criteria 1st 100 unit-no charges,next 100 unit-5 rs per unit,after 200 unit 10 rs per unit.
#include<stdio.h>
int main()
{
	int U,A;
	printf("enter a number u");
	scanf("%d",&U);
	if(U<=100){
	printf("No charge");
	}
	else if(U>=200){
	A=U*5;
	printf("%d\n",A);
	}
	else if(U>=400){
	A=U*10;
	}
	return 0;
}
