//write program to calculate the area and perimeter of rectangle
#include<stdio.h>
int main()
{
int l,b,A,P;
printf("enter a numberl,b");
scanf("%d %d",&l,&b);
A=l*b;
P=2*(l+b);
printf("%d %d",A,P);
return 0;
}
