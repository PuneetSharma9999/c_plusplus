#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	float quadratic (float,float,float);
	float a,b,c,d,r1,r2;
	cout<<"Enter value for a, b and c: ";
	cin>>a>>b>>c;
	quadratic(a,b,c);
	d=b*b-4*a*c;
	return 0;
}
float quadratic (float a, float b, float c)
{
	int d,r1,r2;
	if(d==0)
	{
	    cout<<"Roots are real and equal.";
	    r1=-b/2*a;
        r2=-b/2*a;
        cout<< r1 <<" and "<< r2 ;
    }
    else if(d>0)
    {
    	cout<<"Root are real and different.";
    	r1=(-b+sqrt(d))/(2*a);
    	r2=(-b-sqrt(d))/(2*a);
    	cout<< r1 <<" and "<< r2 ;
	}
	else
	{
		cout<<"Roots are imaginary.";
	}
}
