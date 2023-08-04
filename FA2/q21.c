//A company decide to give a bonus of 5% an employee if his\her year of service is more than 5 years. ask user for their salary and year of service and print their net bonus
#include<stdio.h>
int main()
{
	int s,y,B;
	printf("enter a number s,y");
	scanf("%d %d",&s,&y);
	if(y>=5)
	{
	B=(s*5)/100;
	printf("%d\n",B);
	}
	else
	{
	printf("No Bonus");
	}
	return 0;
}
