#include <iostream>
using namespace std;
int main() 
{
    int arraySize;
    cout<< "Enter the size of the array: ";
    cin>>arraySize;
    while(arraySize <= 0) 
	{
        cout<< "Invalid size. Please enter a positive integer: ";
        cin>> arraySize;
    }
	int multiplesOf7[arraySize];
	cout << "Enter the elements of the array:\n";
    for (int i = 0; i < arraySize; ++i) 
	{
	    cout << "Element " << i + 1 << ": ";
        cin >> multiplesOf7[i];
    }
	int countDivisibleBy7 = 0;
    cout << "Numbers divisible by 7 in the array:\n";
    for (int i = 0; i < arraySize; ++i) 
	{
        if (multiplesOf7[i] % 7 == 0) 
		{
            cout << multiplesOf7[i] << "\n";
            countDivisibleBy7++;
        }
    }
	cout << "Total numbers divisible by 7: " << countDivisibleBy7 << endl;
	if (countDivisibleBy7 == 0) 
	{
        cout << "No element in the array is divisible by 7.\n";
    }
	return 0;
}

