#include<iostream>
using namespace std;
int main()
{
	int ar[5],i,min;
	cout<<"Enter 5 numbers: ";
	for(i=0;i<5;i++)
	{
		cin>>ar[i];
	}
	min=ar[0];
	for(i=0;i<5;i++)
	{
		if(ar[i]<min)
	    min=ar[i];
	}
	cout<<"Minimum number is: "<<min;
	return 0;
}
