#include<iostream>
using namespace std;
int main()
{
	float cp,sp,p,pp,l,lp;
	cout<<"enter cost price of an item";
	cin>>cp;
	cout<<"enter selling price of an item";
	cin>>sp;
	if(sp>cp)
	{
		cout<<"profit"<<endl;
		p=sp-cp;
		pp=(p/cp)*100;
		cout<<"profit is : "<<p<<endl<<"profit% is : "<<pp;
	}
	else
	{
		cout<<"loss"<<endl;
		l=cp-sp;
		lp=(l/cp)*100;
		cout<<"loss is : "<<l<<endl<<"loss% is : "<<lp;
	}
}
