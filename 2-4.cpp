#include<iostream>
using namespace std;
int main()
{
	char ch;
	int a;
	cout<<"Enter a character";
	cin>>ch;
	if(ch>=65&&ch<=90)
	{
		a=1;
	}
	else if(ch>=97&&ch<=122)
	{
		a=2;
	}
	else if(ch>=48&&ch<=57)
	{
		a=3;
	}
	else
	{
		a=4;
	}
	switch(a)
	{
		case 1:
		{
				cout<<"capital letter";
				break;
		 } 
		 case 2:
		{
				cout<<"A smallcase letter";
				break;
		 } 
		 case 3:
		{
				cout<<"A digit";
				break;
		 } 
		 case 4:
		{
			cout<<"Special symbol";
			break;
			
		 } 
		 default:
		 	{
		 		cout<<"incorrect input";
		 		break;
			 }	 	
	}
}
