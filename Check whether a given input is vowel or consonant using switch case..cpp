#include<iostream>
using namespace std;
int main()
{
	char opt;
	cout<<"Enter a character: ";
	cin>>opt;
	switch(opt)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<opt<<" is vowel.";
		break;
		default : cout<<opt<<" is consonant.";
		break;
	}
	return 0;
}
