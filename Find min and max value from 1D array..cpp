#include<iostream>
using namespace std;
int main()
{
	int ar[20],i,n,min,max;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter element: ";
	for(i=0;i<=n-1;i++)
	{
		cin>>ar[i];
	}
	max=min=ar[0];
	for(i=0;i<=n-1;i++)
	{
		if(ar[i]>max)
		max=ar[i];
		else
		if(ar[i]<min)
		min=ar[i];
	}
	cout<<"\n" " maximum element is "<<max;
	cout<<"\n" " minimum element is "<<min;
	return 0;
}
