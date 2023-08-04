//write program to take two numbers a and b as input and print no closest to a (less than a) is completely devisible by b.
#include<stdio.h>
int main()
{
int a,b,m,N;
printf("enter a number a,b");
scanf("%d %d",&a,&b);
m=a/b;
N=m*b;
printf("%d\n",N);
return 0;
}
