#include <iostream>
using namespace std;
int main() 
{
    int row,col;
	cout << "Enter the number of rows: ";
    cin >> row;
	cout << "Enter the number of columns: ";
    cin >> col;
	int multiplesOf7[row][col];
	cout << "Enter the elements of the 2D array:\n";
    for (int i = 0; i < row; ++i) 
	{
        for (int j = 0; j < col; ++j) 
		{
            cout << "Element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> multiplesOf7[i][j];
        }
    }
	int countDivisibleBy7 = 0;
    cout << "Numbers divisible by 7 in the 2D array:\n";
    for (int i = 0;i < row; i++) 
	{
        for (int j = 0 ;j < col; j++) 
		{
            if (multiplesOf7[i][j] % 7 == 0) {
                cout << multiplesOf7[i][j] << "\n";
                countDivisibleBy7++;
            }
        }
    }
	cout << "Total numbers divisible by 7: " << countDivisibleBy7 << endl;
	if (countDivisibleBy7 == 0) 
	{
        cout << "No element in the 2D array is divisible by 7.\n";
    }
	return 0;
}

