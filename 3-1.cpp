#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"enter the operator";
	cin>>ch;
	switch(ch)
	{
		case '+':
			{
				cout<<"Addition of two numbers are : "<<a+b;
				break;
			}
			case '-':
			{
				cout<<"Subtraction of two numbers are : "<<a-b;
				break;
			}
			case '*':
			{
				cout<<"Multiplication of two numbers are : "<<a*b;
				break;
			}
			case '/':
			{
				cout<<"Division of two numbers are : "<<a/b;
				break;
			}
			case '%':
			{
				cout<<"Modulus of two numbers are : "<<a%b;
				break;
			}
			default :
				{
					cout<<"Invalid Input";
				}
	}
}
