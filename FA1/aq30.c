//write program to determine the acceleration due to gravity (g) where g can be obtain from following formula 
#include<stdio.h>
#include<math.h>
int main()
{
int T,I,G;
printf("enter a number T,I");
scanf("%d %d",&T,&I);
	G=pow((2*3.14*T),2)*I;
	printf("%d\n",G);
	return 0;
}
	

