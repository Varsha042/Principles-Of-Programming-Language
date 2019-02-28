#include<iostream>
using namespace std;
int main()
{
	int a,b,n;
	cout<<"Enter two numbers";
	cin>>a>>b;
	cout<<"select the operator you want to use : ";
	cout<<"1. +"<<endl<<"2. -"<<endl<<"3. *"<<endl<<"4. /"<<endl<<"5. %"<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			{
				cout<<"Addition of two numbers are : "<<a+b;
				break;
			}
			case 2:
			{
				cout<<"Subtraction of two numbers are : "<<a-b;
				break;
			}
			case 3:
			{
				cout<<"Multiplication of two numbers are : "<<a*b;
				break;
			}
			case 4:
			{
				cout<<"Division of two numbers are : "<<a/b;
				break;
			}
			case 5:
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
