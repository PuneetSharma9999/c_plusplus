#include<iostream>
using namespace std;
int main()
{
	int fact (int);
	int n,f=1;
	cout<<"Enter a positive integer: ";
	cin>>n;
	cout<<"factorial of "<<n<<" is "<<fact(n);
}
int fact (int n)
{
	if(n>0)
	return (n*fact(n-1));
	else
	return 1;
}

