//write program to calculate the percentage obtain in above question
#include<stdio.h>
int main()
{
int H,M,E,S,C,T,PER;
printf("enter a number H,M,E,S,C,T");
scanf("%d %d %d %d %d %d",&H,&M,&E,&S,&C,&T);
	PER=((H+M+E+S+C)*100)/T;
	printf("%d\n",PER);
	return 0;
}
	

