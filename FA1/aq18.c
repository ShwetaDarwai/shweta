//write program to find lateral sufrace area and total surface area of cuboid.
#include<stdio.h>
int main()
{
int l,w,h,LSA,TSA;
printf("enter a number l,w,h");
scanf("%d %d %d",&l,&w,&h);
	LSA=2*(l+w)*h;
	TSA=2*(l*w)+2*(l*h)+2*(h*w);
	printf("%d %d\n",LSA,TSA);
	return 0;
	}
