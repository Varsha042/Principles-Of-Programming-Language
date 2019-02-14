#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,i;
	cout<<"Enter the number till u want to generate the sequence";
	cin>>n;
	a=0;
	b=1;
	cout<<a<<"  "<<b<<"  ";
	for(i=0;i<n-2;i++)
	{
		c=a+b;
		cout<<c<<"  ";
		a=b;
		b=c;
	}
}
