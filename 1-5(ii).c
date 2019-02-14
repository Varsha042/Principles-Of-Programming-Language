#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,c;
	printf("enter value of x and y");
	scanf("%d %d",&x,&y);
	c=(x+y)*(x-y);
	printf("the result is %d",c);
	return 0;
}
