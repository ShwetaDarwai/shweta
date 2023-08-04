//write program to show how to interchange value of two variable.
#include<stdio.h>
int main()
{
int a,b;
printf("enter a number,a,b");
scanf("%d %d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("%d\n %d\n",a,b);
return 0;
}
