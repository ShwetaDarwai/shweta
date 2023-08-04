//write program to show how to interchange the value of two variable without using 3rd variable.
#include<stdio.h>
int main()
{
int a,b;
printf("enter a number,a,b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d\n %d",a,b);
return 0;
}

