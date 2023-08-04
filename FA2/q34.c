//a teacher has divided her classroom into group of 5 based on their roll no the last roll no of each group has been elected as leader of group who will manage te task perform by group. Write a program to teacher enter roll no of student and check he\she is group leader or not 
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if (n%5==0)
	{
	printf("Student is a Group Leader");
	}
	else
	{
	printf("Student is not a Group Leader");
	}
	return 0;
	}
