#include<iostream>
using namespace std;
int main()
{
	int a,b, x,y,t,hcf,lcm;
	cout<<" Enter two numbers: ";
	cin>>x>>y;
	a=x;
	b=y;
	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	hcf=a;
	lcm=(x*y)/hcf;
	cout<<" hcf= "<<hcf;
	cout<<" lcm= "<<lcm;
	return 0;
}
