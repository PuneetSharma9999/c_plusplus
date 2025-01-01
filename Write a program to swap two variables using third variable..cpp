#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter value of a and b:\n";
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping\n";
    cout<<"Value of a= "<<a;
    cout<<"\nValue of b= "<<b;
}

