//write program take an integer N and check whether it ends with 3 or 7 if it ends with 3 print "ends with 3,if ends with 7 print" it ends with 7" otherwise print number itself.
#include<stdio.h>
int main()
{
	int N;
	printf("enter a number N");
	scanf("%d",&N);
	if(N%10==3){
	printf("N ends with 3");
	}
	else if(N%10==7){
	printf("N ends with 7");
	}
	else{
	printf("%d\n",N);
	}
	return 0;
}
