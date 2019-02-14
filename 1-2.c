#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	printf("enter 2 numbers");
	scanf("%d %d",&a,&b);
	c=a;
	d=b;
	while(b>0)
	{
		a++;
		b--;
	}
	printf("addition of %d and %d is %d",c,d,a);
	return 0;
}
