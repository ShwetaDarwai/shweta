//take input in array and print it
#include<stdio.h>
int main()
{
	int arr[5];
	for(int i=0;i<5;i++){
	printf("enter element no %d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
	printf("%d ",arr[i]);
	}
	return 0;
}

