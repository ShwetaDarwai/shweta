//Roller coasters require children to have minimum height of 5 feet. any child below this height its generally not allowed no them,write program to accept child's height in inches and displays if he\she will be allowed to ride or not.
#include<stdio.h>
int main()
{
	int H;
	printf("enter a number H");
	scanf("%d",&H);
	if(H>=60){
	printf("child allowed to ride");
	}
	else{
	printf("child not allowed to ride");
	}
	return 0;
}
