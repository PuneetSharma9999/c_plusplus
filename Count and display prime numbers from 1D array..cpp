#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n,i,j;
    cout << "Enter the size of the array: ";
    cin >> n;
    int ar[n];
	cout << "Enter " << n << " integers: ";
    for(i=0; i<n; i++) 
	{
        cin >> ar[i];
    }
    cout << "Prime numbers in the array are: ";
    int primecount = 0;
    for (i=0; i<n; i++) 
	{
        int num = ar[i];
        bool isPrime = true;

        if (num <= 1) 
		{
            isPrime = false; 
		} 
		else 
		{
            for (j=2; j<=sqrt(num); j++) 
			{
                if (num % j == 0)
				{
                    isPrime = false;
                    break; 
                }
            }
        }
        if (isPrime)
		{
            cout << num << " ";
            primecount++;
        }
    }
	cout << "\nTotal prime numbers in the array: " << primecount << endl;
	return 0;
}

