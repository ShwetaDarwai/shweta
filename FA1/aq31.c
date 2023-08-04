//A store sells a vadapav and samosa they want to system they enter the no.of vadapav and no.of samosa a custmor buy and bill with final price is automatically calculate and displays vadapav=12 samosa=15
#include<stdio.h>
int main()
{
int v,s,T;
printf("enter a number v,s");
scanf("%d %d",&v,&s);
	T=v*12+s*15;
	printf("%d\n",T);
	return 0;
}
