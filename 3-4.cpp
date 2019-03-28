#include<iostream>
using namespace std;
int main()
{
	int a,number,sum=0,r;
	cout<<"Enter three digit number";
	cin>>a;
	number=a;
	while(a!=0)
	{
		r=a%10;
		sum=sum+(r*r*r);
		a=a/10;
	}
	if(number==sum)
	{
		cout<<number<<" is an armstrong number";
	}
	else
	cout<<number<<" is not an armstrong number";
}
