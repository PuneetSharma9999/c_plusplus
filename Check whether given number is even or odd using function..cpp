#include<iostream>
using namespace std;
int main()
{
	int evenodd (int);
	int n;
	cout<<"Enter an integer: ";
	cin>>n;
	evenodd(n);
	return 0;
}
int evenodd (int n)
{
	if (n%2==0)
	cout<<"is even";
	else
	cout<<"is odd";	
}
