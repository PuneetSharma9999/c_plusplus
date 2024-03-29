#include<iostream>
using namespace std;
int main()
{
	char alphabet (char);
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	alphabet(ch);
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	cout<<ch<<" is an alphabet";
	else
	cout<<ch<<" is not an alphabet";
}
char alphabet (char ch)
{
	if((ch>='a'&& ch<='z') || (ch>='A' && ch<='Z'))
	return 0;
}
