//Take an array of marks of 5 students, if the mark of any student is less than 35 print its roll number (roll no refers to index of array)
#include<stdio.h>
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
	printf("enter marks %d\n",i+1);
	scanf("%d",&arr[i]);
	}
	for(int i=0;i<5;i++){
		if(arr[i]<35){
		printf("%d ",i);
		}
		}
	return 0;
}
