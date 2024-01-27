#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<" Enter value for a and b: ";
cin>>a>>b;
c=a;
a=b;
b=c;
cout<<" After swapping  \n";
cout<<"a = "<<a<<"\n"<<"b = "<<b;
return 0;
}

