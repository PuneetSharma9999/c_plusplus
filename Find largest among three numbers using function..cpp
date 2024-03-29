#include<iostream>
using namespace std;
int main()
{
	int largest (int,int,int);
	int a,b,c;
	cout<<" Enter a, b and c: ";
	cin>>a>>b>>c;
	largest(a,b,c);
	return 0;
}
int largest (int a,int b,int c)
{
	if(a>b && a>c)
	cout<<a<<" is greater. ";
	else
	if(b>c && b>a)
	cout<<b<<" is greater.";
	else
	cout<<c<<" is greater.";
}
