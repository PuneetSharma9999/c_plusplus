#include<iostream>
using namespace std;
int add(int a, int b)
{
    return a+b;
}
int subtract(int a, int b)
{
    return a-b;
}
int multiply(int a, int b)
{
    return a*b;
}
int remainder(int a, int b)
{
    return a%b;
}
float quotient (int a, int b)
{
    return static_cast<float>(a)/b;
}
int main() 
	{
        int num1, num2;
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
		cout << "\nSum is " << add(num1, num2);
		cout << "\nDifference is " << subtract(num1, num2);
		cout << "\nMultiplication is " << multiply(num1, num2);
        cout << "\nRemainder is " << remainder (num1,num2);
        cout << "\nQuotient is " << quotient(num1, num2);
    }

