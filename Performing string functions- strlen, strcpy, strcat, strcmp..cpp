#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	cout<<"The length of string is ";
	cout<<strlen("string")<<endl;
	char a[20];
	strcpy(a,"hello");
	cout<<endl<<strlen(a);
	cout<<endl<<a;
	strcat(a,"world");
	cout<<endl<<"after concat  "<<a;
	cout<<endl<<"strcmp"<<strcmp(a,"helloworld");
	if(strcmp(a,"helloworld")>0)
	cout<<"First one is greater ";
	else 
	if(strcmp(a,"helloworld")<0)
	cout<<"second one is greater ";
	else
	cout<<"Both are equal ";
	return 0;
}
