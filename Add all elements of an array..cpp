#include<iostream>
using namespace std;
int main()
{
	int ar[50],i,n,sum=0;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter elements: ";
	for(i=0;i<n;i++)
	cin>>ar[i];
	for(i=0;i<n;i++)
	sum=sum+ar[i];
	cout<<"sum of elements= "<<sum;
	return 0;
}
