//write program to display "hello" if entered by user is multiple of 5 other wise print "bye"
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n");
	scanf("%d",&n);
	if(n%5==0){
	printf("Hello");
	}
	else{
	printf("Bye");
	}
	return 0;
}
