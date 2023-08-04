// to update new value in array
#include<stdio.h>
int main()
{
	int arr[5]={19,34,57,43,78};
	arr[0]=11;
	arr[3]=100;
	for(int i=0;i<5;i++)
	{
	printf("%d ",arr[i]);
	}
	return 0;
}
