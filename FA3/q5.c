//Accept the gender from user(M,F)and number of days and display the wage according if the age does not fall in any range than display the following messege age>=18 and <30,M=700,F=750 Age >=30 and <=40 M=800 F=850
#include<stdio.h>
int main()
{
	int A,D,W;
	char G;
	scanf("%c",&G);
	printf("enter the number A,D");
	scanf("%d %d",&A,&D);
	if(A>=18 && A<30){
	if(G=='M'){
	W=(D*700);
	printf("%d\n",W);
	}
	else{
	W=(D*750);
	printf("%d\n",W);
	}
	}
	else if(A>=30 && A<=40){
	if(G=='M'){
	W=(D*800);
	printf("%d\n",W);
	}
	else{
	W=(D*850);
	printf("%d\n",W);
	}
	}
	else{
	printf("invalid");
	}
	return 0;
}
	
	
	
	
	
