#include<stdio.h>
#include<conio.h>
void main()
{
	int n,a,sum=0;
	printf("enter a 3 digit number");
	scanf("%d",&n);
	if(n>=100&&n<=999)
	{
		while(n>0)
		{
			a=n%10;
			sum=sum+a;
			n=n/10;
		}
		printf("sum of individual digits of 3 digit number is %d",sum);
		getch();
	}
	else
	{
		printf("enter 3 digit number");
	}
}
