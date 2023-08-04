//write program to take selling price and cost price as input calculate loss percent
#include<stdio.h>
int main()
{
	int cp,sp,loss,lp;
	printf("enter a number cp,sp");
	scanf("%d %d",&cp,&sp);
	if(cp>sp){
	loss=cp-sp;
	lp=(loss*100)/cp;
	printf("%d\n",lp);
	}
	else{
	printf("invalid");
	}
	return 0;
}

