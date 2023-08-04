//The grades in a certain class are determined by course-work and a written examination both components of the assessment carry a maximum of 50points 1.A student must score a total of  45% or more in order to pass 2.A total grade of 44% is moderated to 45% 3.Each component  must be pass with the minimum f 20 points 4.If student score 45% or more but does not achieve the minimum grade in one component he is given a technical fail of 44% which is not moderated to 45%. Print whether the student has pass or failed and also the course total.
#include<stdio.h>
int main()
{
	int CW,WE,T;
	printf("enter a number CW,WE");
	scanf("%d %d",&CW,&WE);
	T=CW+WE;
	if(CW>=20){
	if(WE>=20){
	if(T>=45){
	printf("Pass");
	}
	else if(T<=44){
	printf("Moderate pass");
	}
	else{
	printf("fail");
	}
	}
	else if(T>=45){
	T=44;
	printf("fail");
	}
	else{
	printf("fail");
	}
	}
	else if(WE>=20){
	if(T>=45){
	T=44;
	printf("fail");
	}
	else{
	printf("fail");
	}
	}
	else{
	printf("fail");
	}
	return 0;
}
	
