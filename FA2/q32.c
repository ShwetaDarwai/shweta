//Accept any input from users that marks of 5 subjects phy,chem,bio,math,and comp,calculate percentage and grade according to following %>=90%-A,>=80%-B,>=70%-C,>=60%-D,>=40%-E,<40%-F
#include<stdio.h>
int main()
{
	int p,c,b,m,k,T,sum,P;
	printf("enter a number p,c,b,m,k,T");
	scanf("%d %d %d %d %d %d",&p,&c,&b,&m,&k,&T);
	sum=p+c+b+m+k;
	P=(sum*100)/T;
	if(P>=90){
	printf("Grade A");
	}
	else if(P>=80){
	printf("Grade B");
	}
	else if(P>=70){
	printf("Grade C");
	}
	else if(P>=60){
	printf("Grade D");
	}
	else if(P>=40){
	printf("Grade E");
	}
	else if(p<40){
	printf("Grade F");
	}
	return 0;
}

