#include<iostream>
using namespace std;
int main()
{
    int i,n,fact=1;
	cout<<"Enter a positive integer : ";
	cin>>n;
	for(i=1;i<=n;i++)
	fact=fact*i;
	cout<<"Factorial of "<<n<<" is "<<fact;
    return 0;
}	
