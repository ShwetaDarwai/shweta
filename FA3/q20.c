//find the third max between 4 numbers
#include<stdio.h>
int main()
{
	int a,b,c,d,m,tm,m1,tm1;
	printf("enter the number a,b,c,d");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<b){
	m=a;
	tm=b;
	}
	else{
	m=b;
	tm=a;
	}
	if(c<d){
	m1=c;
	tm1=d;
	}
	else{
	m1=d;
	tm1=c;
	}
	if(m<m1){
	if(m1<tm){
	printf("tmax=%d\n",m1);
	}
	else{
	printf("tmax=%d\n",tm);
	}
	}
	else if(m<tm1){
	printf("tmax=%d\n",m);
	}
	else{
	printf("tmax=%d\n",tm1);
	}
	return 0;
}
	
	

