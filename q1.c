#include<stdio.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;i++)
	{
	scanf("%d",&array[i]);
	}
	for(int j=0;j<n;j++)
	{
	printf("%d",array[j]);
	}
	printf("\n");
	return 0;
}
