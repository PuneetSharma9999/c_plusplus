#include<iostream>
using namespace std;
int main()
{
	int reverse (int);
	int n,m=0,r;
	cout<<" Enter numbers: ";
	cin>>n;
	reverse(n);
	return 0;
}
int reverse (int n)
{
	int r,m;
	while(n!=0)
	{
		r=n%10;
		m=m*10+r;
		n=n/10;
	}
	cout<<" reverse value "<<m;
}
