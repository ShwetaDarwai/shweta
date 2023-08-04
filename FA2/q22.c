//A student will not be allowed to sit in an exam  if his\her attendance is less that75% take following input from user. Number of classes held,Number of classes attended, and print percentange of classes attended is the student allowed to sit in exam or not.
#include<stdio.h>

int main()
{
	int CA,CH,P;
	printf("enter a number CA,CH");
	scanf("%d %d",&CA,&CH);
	P=(CA/CH)*100;
	if(P>=75)
	{
	printf("student allowed to sit in exam");
	}
	else{
	printf("student not allow to sit in exam");
	}
	return 0;
}
