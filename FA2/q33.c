//write program to input basic salary of an employee and calculate its gross salaray according to the salary  following BS<=10000;HRA=20%,DA=80%,BS<=20000;HRA=25%,DA=90%,BS>20000,HRA=30%,DA=95%
#include<stdio.h>
int main()
{
	float BS,HRA,DA,GS;
	printf("enter a number BS");
	scanf("%f",&BS);
	if(BS<=10000){
	HRA=(float)20/100;
	DA=(float)80/100;
	GS=BS+(BS*HRA)+(BS*DA);
	printf("%f\n",GS);
	}
	else if(BS<=20000){
	HRA=(float)25/100;
	DA=(float)90/100;
	GS=BS+(BS*HRA)+(BS*DA);
	printf("%f\n",GS);
	}
	else if(BS>20000){
	HRA=(float)30/100;
	DA=(float)95/100;
	GS=BS+(BS*HRA)+(BS*DA);
	printf("%f\n",GS);
	}
	else{
	printf("invalid");
	}
	return 0;
}
	
