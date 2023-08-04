//A certain steel is graded according to the following conditions:(i) Rockwell-hardness > 50(ii) Carbon content > 0.7(iii) Tensile strength > 5600 kg/cm2 The steel is graded as follows:a. Grade 10, if all the conditions are satisfied b. Grade 9, if conditions (i) and (ii) are satisfied c. Grade 8, if conditions (ii) and (iii) are satisfied d. Grade 7, if conditions (i) and (iii) are satisfied e. Grade 0, otherwise
#include<stdio.h>
int main()
{
	float RH,CC,TS;
	printf("enter the number RH,CC,TS");
	scanf("%f %f %f",&RH,&CC,&TS);
	if(RH>50 && CC>0.7){
	if(TS>5600){
	printf("Grade 10");
	}
	}
	else if(RH>50 && CC>0.7){
	if(TS<5600){
	printf("Grade 9");
	}
	}
	else if(RH<50 && CC>0.7){
	if(TS>5600){
	printf("Grade 8");
	}
	}
	else if(RH>50 && CC<0.7){
	if(TS>5600){
	printf("Grade 7");
	}
	}
	else{
	printf("Grade 0");
	}
	return 0;
}
