#include<iostream>
using namespace std;
int main()
{
	int swap (int,int);
int a,b;
cout<<" Enter value for a and b: ";
cin>>a>>b;
swap(a,b);
cout<<" After swapping  \n";
cout<<"a = "<<b<<"\n"<<"b = "<<a;
return 0;
}
int swap (int a,int b)
{
a=b;
b=a;
}

