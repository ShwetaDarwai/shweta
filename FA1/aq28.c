//write program to calculate the total marks obtained by students in examination (hindi,math,english,science,comp)
#include<stdio.h>
int main()
{
int H,M,E,S,C,Sum;
printf("enter a number:H,M,E,S,C");
scanf("%d %d %d %d %d",&H,&M,&E,&S,&C);
	Sum=H+M+E+S+C;
	printf("%d\n",Sum);
	return 0;
}

