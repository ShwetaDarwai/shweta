//write program to take two side as input and check weather it is rectangle or square
#include<stdio.h>
int main()
{
	int ab,bc;
	printf("enter a number ab,bc");
	scanf("%d %d",&ab,&bc);
	if(ab==bc){
	printf("it is square");
	}
	else{
	printf("it is rectangle");
	}
	return 0;
}
	
