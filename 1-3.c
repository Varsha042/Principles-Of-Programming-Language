#include<stdio.h>
#include<conio.h>
void main()
{
	float evaluation,a,b,c,d,e,f,g;
	printf("enter the values of a,b,c,d,e,f,g");
	scanf("%f %f %f %f %f %f %f",&a,&b,&c,&d,&e,&f,&g);
	evaluation=((a+b/c*d-e)+(f-g));
	printf("the result is %f",evaluation);
	return 0;
}
