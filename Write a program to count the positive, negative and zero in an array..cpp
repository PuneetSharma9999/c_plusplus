#include<iostream>
using namespace std;
int main()
{
    int ar[10],pos=0,neg=0,zero=0,i;
    cout<<"Enter numbers:\n";
    for(i=0;i<10;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<10;i++)
    {
        if(ar[i]>0)
        {
            pos++;
        }
        else if(ar[i]<0)
        {
            neg++;
        }
        else
        {
            zero++;
        }
    }
    cout<<"Total positive numbers= "<<pos;
    cout<<"\nTotal negative numbers= "<<neg;
    cout<<"\nTotal zero numbers= "<<zero;
}

