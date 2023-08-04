//write program to calculate selling price of product,if MRP and discount are given.
#include<stdio.h>
int main()
{
int MRP,Dis,SP;
printf("enter a number MRP,Dis");
scanf("%d %d",&MRP,&Dis);
	SP=MRP-Dis;
	printf("%d\n",SP);
	return 0;
}


