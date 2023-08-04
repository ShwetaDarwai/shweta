//write program to categorize the shape of a qiadrilateral as either a square,rhombus,rectangle, parallelogram or irregular quadrilateral having input the lengths of the four sides and one internal angle
#include<stdio.h>
int main()
{
	int AB,BC,CD,DA,I;
	printf("enter the number AB,BC,CD,DA,I");
	scanf("%d %d %d %d %d",&AB,&BC,&CD,&DA,&I);
	if(AB==BC && BC==CD && CD==DA){
	if(I==90){
	printf("Square");
	}
	else{
	printf("Rhombus");
	}
	}
	else if(AB==CD && BC==DA){
	if(I==90){
	printf("Rectangle");
	}
	else{
	printf("Parallelogram");
	}
	}
	else if(AB!=BC!=CD!=DA){
	if(I!=90){
	printf("Invalid");
	}
	}
	else
	{
	printf("Invalid");
	}
	return 0;
}
	
	
