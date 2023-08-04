//find second max of 3 numbers
#include<stdio.h>
int main()
{
	int a,b,c,max,smax;
	printf("enter the number a,b,c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
	max=a;
	smax=b;
	}
	else{
	max=b;
	smax=a;
	}
	if(max>c){
	if(c>smax){
	printf("%d\n",c);
	}
	else{
	printf("%d\n",smax);
	}
	}
	else{
	printf("%d\n",max);
	}
	return 0;
}
