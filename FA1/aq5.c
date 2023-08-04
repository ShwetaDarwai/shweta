//write program to show th steps finding the simple interest on the given amount at the given rate
#include<stdio.h>
int main()
{
int p,r,t,SI;
printf("enter the number");
scanf("%d %d %d",&p,&r,&t);
SI=p*r*t/100;
printf("%d",SI);
return 0;
}
