//accept temperature in degree celcius of water and check whether its boiling point or not(boiling point = 100 degree celcius.)
#include<stdio.h>
int main()
{
	int temp;
	printf("enter a number temp");
	scanf("%d",&temp);
	if(temp>=100){
	printf("water is boiling");
	}
	else{
	printf("water is not boiling");
	}
	return 0;
}
