#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the valur of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	
	printf("the swaped value of a=%d , b=%d\n  ",a,b);
	return 0;	
}
