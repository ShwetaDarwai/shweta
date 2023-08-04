//if p amount of money is invested for N years at an annual rate of interest I,the money grow to an amount T,where T is given by T=(1+I/100)**N, write program to show how T is determine.
#include<stdio.h>
#include<math.h>
int main()
{
float p,i,n,pow,T;
printf("enter a number,p,i,n");
scanf("%f %f %f",&p,&i,&n);
T=p*(pow*((1+i)/100.0),n);
printf("%f\n",T);
return 0;
}
