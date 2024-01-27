#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter year :";
	cin>>n;
	if((n%4==0)&&(n%100!=0))
	cout<<" this is a Leap Year ";
	else 
	if(n%100==0)
	cout<<"This is not a Leap Year";
	else 
	if(n%400==0)
	cout<<"This is a Leap Year";
	else
    cout<<"This is not a Leap Year";
	return 0;
}

