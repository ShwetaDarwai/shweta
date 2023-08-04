#include<stdio.h>
int main()
{
	char name[10][10];
	printf("enter 4 names:\n");
	for(int i=0;i<4;i++)
	{
	scanf("%s",name[i]);
	}
	for(int i=0;i<4;i++)
	{
	printf("%s ",name[i]);
	}
	return 0;
}
	
