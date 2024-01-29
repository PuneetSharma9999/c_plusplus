#include<iostream>
using namespace std;
int main() 
{
    float num1, num2;
	cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "\n" " sum is " << num1 + num2;
    cout << "\n" " difference is " << num1 - num2;
    cout << "\n" " multiplication is " << num1 * num2;
    cout << "\n" " remainder is " << (int)num1 % (int)num2;
	cout << "\n" " quotient is " << num1 / num2;
	return 0;
}
