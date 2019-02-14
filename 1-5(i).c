#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y;
	float c;
	printf("enter value of x and y");
	scanf("%d %d",&x,&y);
	c=(float)(x+y)/(x-y);
	printf("the result is %f",c);
	return 0;
}
