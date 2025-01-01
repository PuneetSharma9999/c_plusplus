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
    cout<<endl<<"After concatenate= "<<a;

    cout<<endl<<"strcmp "<<strcmp(a,"helloworld");
    if(strcmp(a,"helloworld")>0)
    cout<<"\nFirst string is greater";
    else if(strcmp(a,"helloworld")<0)
    cout<<"\nSecond string is greater";
    else
    cout<<"\nBoth strings are equal";
}

