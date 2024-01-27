#include<iostream>
using namespace std;
int main()
{
	int n,m=0,r;
	cout<<" Enter numbers: ";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		m=m*10+r;
		n=n/10;
	}
	cout<<" reverse value "<<m;
	return 0;
}
